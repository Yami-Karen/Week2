#include <iostream>
using namespace std;
int main()
{
	//con dem voi so lan lap nhat dinh
	for (int i = 1;i <= 100;i++)
	 if (i%2 == 0) cout << i << " ";
	cout << endl;
	//khong xac dinh so lan lap
	int i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) cout << i << " ";
		if (i == 100) break;
	}
	cout << endl;
	//chi su dung dieu kien thoat (toi uu nhat)
	i = 0;
	while (i < 100)
	{
		i++;
		if (i%2 == 0) cout << i << " ";
	}
	cout << endl;
	// dung break
	i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) cout << i << " ";
		if (i == 100) break;
	}
	cout << endl;
	//dung continue
	i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) cout << i << " ";
		if (i < 100) continue;else break;
	}
	return 0;
}
