#include <iostream>
using namespace std;

int f[13];

void initM()
{
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
}

bool leap(int yy)
{
	if (yy%4 == 0 && yy%100 != 0 || yy%400 == 0)
	 return true;
	else return false; 
}

void date(int day)
{
	initM();
	int y = day/(365*3 + 366)*4 + (day%(365*3 + 366))/365;
	if ((day%(365*3+366))%365 != 0) y++;
	int d = day - (y - 1)*365 - (y - 1)/4;
	if (leap(y) == true) for (int i = 2;i <= 12;i++) f[i]++;
	int m;
	for (int i = 1;i <= 12;i++)
	 if (f[i] >= d) 
	 {
	 	m = i;
	 	break;
	 }
	d = d - f[m - 1];
	if (d < 10) cout << "0" << d << "-";
	else cout << d << "-";
	if (m < 10) cout << "0" << m << "-";
	else cout << m << "-";
	cout << y << endl;
}

int main()
{
	initM();
	string s;
	cin >> s;
	int dd,mm,yyyy;
	dd = (s[0] - 48)*10 + s[1] - 48;
	mm = (s[3] - 48)*10 + s[4] - 48;
	yyyy = (s[6] - 48)*1000 + (s[7] - 48)*100 + (s[8] - 48)*10 + s[9] - 48;
	int d = dd + f[mm - 1] + (yyyy - 1)*365 + (yyyy - 1)/4;
	int k;
	while (true)
	{
		cin >> k;
		if (k == 0) break;
		date(d + k);
	}
	return 0;
}
