#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a[3][3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		int ID;
		cin >> ID;
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			char l = 0;
			float price = 0;
			cin >> l >> price;
			switch (l)
			{
			case 'A':a[ID - 1][0] += price; break;
			case 'B':a[ID - 1][1] += price; break;
			case 'C':a[ID - 1][2] += price; break;
			default:break;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << " ";
		cout << fixed << setprecision(2) << a[i][0] + a[i][1] + a[i][2] << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << (char)(i + 65) << " ";
		cout << fixed << setprecision(2) << a[0][i] + a[1][i] + a[2][i] << endl;
	}
	return 0;
}