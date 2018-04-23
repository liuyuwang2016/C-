//#1 单词翻转：反转每一个单词的字符串，但是单词之间的空格需要和原文一致
#include<iostream>    
using namespace std;
int i = 0;
char input[501];
int recur() {
	char c = input[i];
	i++;
	if (c == ' ') {
		return 1;
	}
	if (c != ' '&&c != '\0') {
		recur();
		cout << c;
	}
	return 1;
}

int main() {
	cin.getline(input, 501);
	while (input[i] != '\0') {
		if (recur() == 1)//每次遇到空格，都会返回1，所以打印一个空格    
			cout << ' ';
	}
	if (input[i] == '\0') {
		cout << endl;//最后输出换行符    
		return 0;
	}
}