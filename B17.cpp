#include <iostream>
using namespace std;
bool leap(int yy)
{
	if (yy%4 == 0 && yy%100 != 0 || yy%400 == 0)
	 return true;
	else return false; 
}
int main()
{
	int a;
	cin >> a;
	if (leap(a) == 1) cout << "true"; else cout << "false";
	return 0;
}
