#include <iostream>
using namespace std;

int main() {
	int m = 0, n = 0;
	cin >> m >> n;
	int arr[22][22];
	for (int i = 0; i < m + 2; i++) {
		for (int j = 0; j < n + 2; j++) {
			if (i == 0 || j == 0 || i == m + 1 || j == n + 1) {
				arr[i][j] = 0;
			}
			else {
				cin >> arr[i][j];
			}
		}
	}
	for (int i = 1; i < m + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			int t = arr[i][j];
			if (t >= arr[i - 1][j] && t >= arr[i][j + 1] && t >= arr[i + 1][j] && t >= arr[i][j - 1]) {
				cout << i - 1 << ' ' << j - 1 << '\n';
			}
		}
	}

	return 0;
}