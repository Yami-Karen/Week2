#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a;
	cout << a << " ";
	b = a;
	while (a > 0)
	{
		cin >> a;
		if (a != b)
		 {
		 	b = a;
		 	cout << a << " ";
		 }
	}
	return 0;
}
