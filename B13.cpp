#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	cout << setprecision(3) << (double) sqrt(a*a + b*b);
	return 0;
}
