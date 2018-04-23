#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] == i)
		{
			cout << a[i] << endl;
			return 1;
		}
	}

	cout << "N" << endl;
	return 0;
}