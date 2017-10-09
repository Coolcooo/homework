#include <iostream>
using namespace std;
int main()
{

double consumption,fuel,kilo;
cout<< "how many kilometers did you drive and spent fuel?\n _______\b\b\b\b\b\b\b";
cin>> kilo;
cin>>fuel;
consumption = (fuel/kilo)*100.0;
cout<< "Your consumption " << consumption << " on 100 litres"<<endl;
cin.get();
cin.get();
cin.get();
return 0;
		}

			
