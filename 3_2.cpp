#include <iostream>
using namespace std;
const float Metr = 0.0254;
const float Inch = 12;
const float Kilo = 2.2;
int main()
{
double inch ;
double ft;
double lb;
 cout << "your growth in ft. and inch. : _ ___\b\b\b\b\b";
cin >> ft ;
cin>> inch;
cout << "your weight in lb. : ___\b\b\b";
cin >> lb;
inch = (ft*Inch + inch)*Metr;
lb = lb / Kilo;
ft = lb / (inch*inch);
cout << "your BMI : "<< ft<<endl;

cin.get();
cin.get();
return 0;
		}
