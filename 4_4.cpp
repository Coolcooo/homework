#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
	string name;
	float diameter;
	float weight;
};

int main()
{
	Pizza company;
	getline(cin,company.name);
	cin>>company.diameter;
	cin>>company.weight;
	cout<< company.name<<" "<<company.diameter<<" "<<company.weight<<endl;
	
	
	cin.get();
	cin.get();
	return 0;
}
