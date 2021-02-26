#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	double s = (a + b + c)/2;
	cout << setprecision(2) << fixed << sqrt(s*(s-a)*(s-b)*(s-c));
	return 0;
}
