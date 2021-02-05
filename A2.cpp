#include <iostream>
using namespace std;
int main()
{
	int read,k;
	cin >> read;
	//con dem voi so lan lap nhat dinh
	k = read;
	for (int i = 1;k >= 3;i++)
	 k /=3;
	cout << k << endl;
	//khong xac dinh so lan lap
	k = read;
	while (true)
	{
		k /= 3;
		if (k < 3) break;
	}
	cout << k << endl;
	//chi su dung dieu kien thoat (toi uu nhat)
	k = read;
	while (k >= 3)
	{
		k /= 3;
	}
	cout << k << endl;
	// dung break
	k = read;
	while (true)
	{
		k /= 3;
		if (k < 3) break;
	}
	cout << k << endl;
	//dung continue
	k = read;
	while (true)
	{
		k /= 3;
		if (k >= 3) continue;else break;
	}
	cout << k;
	return 0;
}
