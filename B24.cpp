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
	int d,m,y;
	cin >> d >> m >> y;
	int f[12];
	f[0] = 0;
	f[1] = 31;
	f[2] = 28 + f[1];
	f[3] = 31 + f[2];
	f[4] = 30 + f[3];
	f[5] = 31 + f[4];
	f[6] = 30 + f[5];
	f[7] = 31 + f[6];
	f[8] = 31 + f[7];
	f[9] = 30 + f[8];
	f[10] = 31 + f[9];
	f[11] = 30 + f[10];
	f[12] = 31 + f[11];
	int ds = 0;
	for (int i = 1;i <= y;i++) if (leap(y)) ds++;
	ds += (y-1)*365;
	ds += f[m - 1];
	ds += d;
	switch(ds%7)
	{
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6: 
			cout <<"Saturday";
			break;
		default:
			cout << "Sunday";
	}
	return 0;
}
