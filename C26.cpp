#include <iostream>
using namespace std;
int main()
{
	int n,read,max,min;
	int s;
	cin >> n;
	cin >> read;
	s = read;
	max = read; min = read;
	if (n > 1)
	 for (int i = 1;i < n;i++)
	  {
	  		cin >> read;
	  		s += read;
	  		if (read > max) max = read;
	  		if (read < min) min = read;
	  }
	cout << "Mean: " << s/n << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	return 0;
}
