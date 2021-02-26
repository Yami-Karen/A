#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a,b;
	cin >> a >> b;
	cout << setprecision(2) << fixed << a/(b*b);
	return 0;
}
