#include <iostream>
#include <string>

using namespace std;
// CIS2013_Week05_Quiz


	
const int MAX = 30;
int student[MAX];
string name[MAX];

void makeStudent(int x){
	cout << "Enter Student's name ";
	cin >> name[x];
	cout << "Enter " << name[x] << "'s grade: ";
	cin >> student[x];
}

void printGrade(int y){
	cout << name[y] << "'s grade is " << student [y] << endl;
}
int main(){
	int LEN;
	char choose;
	
	do {
	cout << endl;
	cout << "***************************\n"
	"What do you want to do?\n"
	"a) Add a Student\n"
	"b) Set a Student Grade\n"
	"c) Print all grades\n"
	"***************************\n"
	"Enter y/n if you wish to continue or exit\n";
	cin >> choose;
	cout << endl;
	
		if (choose == 'a'){
			LEN++;
			cout << endl;
			cout << "You now have total " << LEN << " students." << endl;

		} else if (choose == 'b'){
		
			for(int i=LEN - 1; i<LEN; i++){
			makeStudent(i);
			}
		} else if (choose == 'c'){
		
			for (int j=0; j<LEN; j++){
			printGrade(j);
			}
		}
	}while ('n' != choose);
	
	
	return 0;
}