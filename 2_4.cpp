#include <iostream>
using namespace std;
double  ceinfa (int); 
int main()
{
 cout << "Please enter a Celsius value: "<< endl;
int n;
cin >> n;
cout << n<< " degrees Celsius is "<< ceinfa(n)<< " degrees Fahrenheit"<<endl;
cin.get();
cin.get();
return 0;

		}
double ceinfa(int n)
{
double far;
far = 1.8*n+32.0;
return far;
		}
