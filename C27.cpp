#include <iostream>
using namespace std;
int main()
{
	int read;
	while (true)
	{
		cin >> read;
		if (read == -1)
		{
			cout << "Bye";
			break;
		} 
		if (read > 0 && read%5 == 0)cout << read/5 << endl;
	}
	return 0;
}
