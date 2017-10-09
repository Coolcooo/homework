#include <iostream>
using namespace std;
void ft (int);
const int factor = 12;
int main()
{
cout << "your growth: \n ____\b\b\b\b";
int inch;
cin >> inch;
ft(inch);
cin.get();
cin.get();
return 0;

		}
void ft(int inch)
{
int Ft ;
Ft = inch / factor;
inch = inch % factor;
cout << "your growth: " << Ft<<" ft"<< " and "<< inch<<" inch."<< endl;
		}
