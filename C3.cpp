#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = -n;i <= 0;i++)
	{	
	 	for (int j = -n;j <= n;j++)
	  		if (abs(j) <= n - abs(i)) cout << "*";else cout << " ";
	  	cout << endl;	
	}
	return 0;
}
