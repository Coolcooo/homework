#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
	string name;
	float diameter;
	float weight;
};
string ooops;

int main()
{
	Pizza * company = new Pizza;
	cin>>company->diameter;
	cin.get();
	getline(cin,company->name);
	cin>>company->weight;
	cout<< company->name<<" "<<company->diameter<<" "<<company->weight<<endl;
	
	cin.get();
	cin.get();
	return 0;
}
