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
	CandyBar snack
	{
	"Mocha Munch",2.3,350
	};
	cout <<snack.name<<" "<<snack.weight<<" "<<snack.calories<<endl;
	cin.get();
	cin.get();
	return 0;
}
