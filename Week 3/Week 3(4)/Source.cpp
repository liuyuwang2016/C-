#include<iostream>

#include<stdio.h>
using namespace std;


int main() {
	char str[101];
	int  stackNum[101];
	char stackChar[101];
	int  tail = -1;
	while (cin.getline(str, 101)) {
		cout << str << endl;
		for (int i = 0; str[i] != '\0'; ++i) {
			if (str[i] == '(') {
				++tail;
				stackChar[tail] = str[i];
				stackNum[tail] = i;
			}
			else if (str[i] == ')') {
				if (stackChar[tail] == '(') {
					str[stackNum[tail]] = ' ';
					str[i] = ' ';
					--tail;
				}
				else {
					++tail;
					stackChar[tail] = str[i];
					stackNum[tail] = i;
				}
			}
			else {
				str[i] = ' ';
			}
		}
		for (int j = 0; j <= tail; ++j) {
			if (stackChar[j] == ')') {
				str[stackNum[j]] = '?';
			}
			else {
				str[stackNum[j]] = '$';
			}
		}
		cout << str << endl;
		tail = -1;
	}
	return 0;
}