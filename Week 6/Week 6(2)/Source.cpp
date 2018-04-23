#include <iostream>
using namespace std;

int main() {
	int n = 0;
	char arr[1000][256];

	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++) {
		cin.getline(arr[i], 256);
		for (int j = 0; arr[i][j] != '\0'; j++) {
			switch (arr[i][j]) {
			case 'A':
				cout << 'T';
				break;
			case 'T':
				cout << 'A';
				break;
			case 'G':
				cout << 'C';
				break;
			case 'C':
				cout << 'G';
				break;
			}
		}
		cout << '\n';
	}

	return 0;
}