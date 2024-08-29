#include <iostream>
using namespace std;
void show_array(int arr[], int MasLen)
{
    for (int i = 0; i < MasLen; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bucketSort(int arr[], int MasLen)
{
    const int BUCKET_NUM = 10;
    const int BUCKET_SIZE = 10;

    int buckets[BUCKET_NUM][BUCKET_SIZE];

    int bucketSizes[BUCKET_NUM] = { 0 };
    for (int i = 0; i < MasLen; i++)
    {
        int bucketIndex = arr[i] / BUCKET_NUM;
        buckets[bucketIndex][bucketSizes[bucketIndex]] = arr[i];
        bucketSizes[bucketIndex]++;
    }
    for (int i = 0; i < BUCKET_NUM; i++)
    {
        for (int j = 0; j < bucketSizes[i]; j++)
        {
            int tmp = buckets[i][j];
            int k = j - 1;
            while (k >= 0 && buckets[i][k] > tmp)
            {
                buckets[i][k + 1] = buckets[i][k];
                k--;
            }
            buckets[i][k + 1] = tmp;
        }
    }
    int idx = 0;
    for (int i = 0; i < BUCKET_NUM; i++)
    {
        for (int j = 0; j < bucketSizes[i]; j++)
        {
            arr[idx++] = buckets[i][j];
        }
    }
}
void countSort(int arr[], int MasLen)
{
    int* output = new int[MasLen];
    int* count;
    int max = arr[0];
    for (int i = 0; i < MasLen; i++)
    {
        if (arr[i] > max) { max = arr[i]; }
    }

    count = new int[max + 1];
    for (int i = 0; i <= max; ++i) { count[i] = 0; }

    for (int i = 0; i < MasLen; i++) count[arr[i]]++;
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = MasLen - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < MasLen; i++) arr[i] = output[i];

    delete[] count;
}
void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int* left = new int[n1];
    int* right = new int[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < n1)
        arr[k++] = left[i++];

    while (j < n2)
        arr[k++] = right[j++];

    delete[] left;
    delete[] right;
}
void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pI = partition(arr, low, high);
        quickSort(arr, low, pI - 1);
        quickSort(arr, pI + 1, high);
    }
}
int main() {
    setlocale(LC_ALL, "ru_RU");
    srand(time(NULL));
    int MasLen;
    cout << "������� ������ �������: ";
    cin >> MasLen;
    int* array = new int[MasLen];
    for (int i = 0; i < MasLen; i++) {
        array[i] = rand() % 10;
    }
    cout << "�������� ������: ";
    show_array(array, MasLen);
    cout << "1 - ���������� �������\n" << "2 - ���������� ���������\n" << "3 - ���������� ��������\n" << "4 - ������� ����������\n" << "������� ����� ��������������� ���� ����� ����� ���������� ����� �����������: ";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        bucketSort(array, MasLen);
        cout << "��������������� ������: ";
        show_array(array, MasLen);
        break;
    case 2:
        countSort(array, MasLen);
        cout << "��������������� ������: ";
        show_array(array, MasLen);
        break;
    case 3:
        mergeSort(array, 0, MasLen - 1);
        cout << "��������������� ������: ";
        show_array(array, MasLen);
        break;
    case 4:
        quickSort(array, 0, MasLen - 1);
        cout << "��������������� ������: ";
        show_array(array, MasLen);
        break;
    default:
        cout << "��� ������ " << endl;
        break;
    }
    return 0;
}