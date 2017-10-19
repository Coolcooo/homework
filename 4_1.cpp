#include <iostream>
#include <string>
using namespace std;
string FName,LName;
char grade;
int age;

int main()
{
	cout<<"What is your first name?"<<endl;
	getline(cin,FName);
	cout<<"What is your last name?\n";
	getline(cin,LName);
	cout<< "What letter grade do you deserve?\n";
	cin>> grade;
	grade=grade+1;
	cout << "What is your age?\n";
	cin>> age;
	cout<< "Name: "<<LName<<", "<<FName<<endl;
	cout<<"Grade: "<< grade<<endl;
	cout<<"Age: "<<age<<endl;
	cin.get();
	cin.get();
	return 0;
}

