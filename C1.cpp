#include <iostream>
#include <cmath>
using namespace std;
bool check(int k)
{
	for (int i = 2;i < sqrt(k);i++)
		if (k%i == 0) return false;
	return true;
}
int main()
{
	int k;
	cin >> k;
	if (check(k)) cout << "yes";else cout << "no";
}
