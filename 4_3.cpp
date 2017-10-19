#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
	string name;
	float weight;
	int calories;
};

int main()
{
	CandyBar snack[3]=
	{
		{"Mocha Munch",2.3,230},
		{"Munch Mocha",2.4,450},
		{"Fall sleepers",6.4,356}
	}	;
	cout <<snack[0].name<<" "<<snack[0].weight<<" "<<snack[0].calories<<endl;
	cout <<snack[1].name<<" "<<snack[1].weight<<" "<<snack[1].calories<<endl;
	cout <<snack[2].name<<" "<<snack[2].weight<<" "<<snack[2].calories<<endl;
	cin.get();
	cin.get();
	return 0;
}
