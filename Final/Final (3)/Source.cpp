#include<iostream>  
using namespace std;
int main() {
	int a, b, c;
	char d, e;//�����Ե���  
	cin >> a >> d >> b >> e >> c;//��Ϊ�����ֻ�����һ��������ţ����Ա���if else����������  
	//��������2��2��4 ͬʱ���+��*����������´���  
	if (a + b == c) {
		cout << '+' << endl;
	}
	else {
		if (a - b == c)
			cout << '-' << endl;
		else {
			if (a * b == c)
				cout << '*' << endl;
			else {
				if (a / b == c)
					cout << '/' << endl;
				else {
					if (a % b == c)
						cout << '%' << endl;
					else
						cout << "error" << endl;
				}
			}
		}
	}
	return 0;
}