# include <iostream>
# include <fstream>
using namespace std;
struct SportTeam {
	char TeamName[100];
	char TeamCity[100];
	int TeamNumberOfPlayers;
	int TeamScore;
};
void addelements() {
	fstream SportTeamFile("D:\\���\\������������ ������ �����������\\Labs\\8_���\\file.txt", std::ios::app);
	if (SportTeamFile.is_open()) {
		SportTeamFile.seekg(1111110, ios::beg);
		SportTeam newteam;
		cout << "������� �������� ����� �������" << endl;
		cin.getline(newteam.TeamName, 100);
		SportTeamFile << "�������� �������: " << newteam.TeamName << endl;
		cout << "������� ����� �������" << endl;
		cin.getline(newteam.TeamCity, 100);
		SportTeamFile << "����� �������:  " << newteam.TeamCity << endl;
		cout << "������� ���������� �������" << endl;
		cin >> newteam.TeamNumberOfPlayers;
		SportTeamFile << "���������� �������: " << newteam.TeamNumberOfPlayers << endl;
		cout << "������� ���� ������� " << endl;
		cin >> newteam.TeamScore;
		SportTeamFile << "���� �������: " << newteam.TeamScore << endl;
		cin.ignore();
		SportTeam newteam1;
		cout << "������� �������� ����� �������" << endl;
		cin.getline(newteam1.TeamName, 100);
		SportTeamFile << "�������� �������: " << newteam1.TeamName << endl;
		cout << "������� ����� �������" << endl;
		cin.getline(newteam1.TeamCity, 100);
		SportTeamFile << "����� �������:  " << newteam1.TeamCity << endl;
		cout << "������� ���������� �������" << endl;
		cin >> newteam1.TeamNumberOfPlayers;
		SportTeamFile << "���������� �������: " << newteam1.TeamNumberOfPlayers << endl;
		cout << "������� ���� ������� " << endl;
		cin >> newteam1.TeamScore;
		SportTeamFile << "���� �������: " << newteam1.TeamScore << endl;

	}
	else {
		cout << "������ �������� �����";
	}
	SportTeamFile.close();
}
int main() {
	setlocale(LC_ALL, "RU");
	addelements();
	return 0;
}