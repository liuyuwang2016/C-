/*
 *
 *
 */
#include <iostream>  
#include <cstring>  
using namespace std;
int main()
{
	char words[1000][40]; //���ڱ���ÿһ������  
	int wordsLen[1000]; // ��¼ÿһ�����ʵĳ���  
	int n; // ��Ҫ����ĵ�������  
	cin >> n;
	cin.get();//cin֮��Ҫ��cin.get()��ȡ���з���һ��ʼûע�⵽������������ǻ������ο�  
	for (int i = 0; i < n; i++) //���뵥�����ݣ������õ�ÿ�����ʵĳ���  
	{
		char temp;
		for (int j = 0; j < 40; j++) {
			cin.get(temp);
			if (temp != ' '&&temp != '\n') {
				words[i][j] = temp;

			}
			else
			{
				wordsLen[i] = j;
				break;
			}
		}

	}
	//�������һ������  
	int length = wordsLen[0];
	for (int j = 0; j < wordsLen[0]; j++)
		cout << words[0][j];
	for (int i = 1; i < n; i++)
	{
		//����õ��ʣ���ͬǰ���һ���ո����󲻻��У�������ո�͸õ���  
		if (length + 1 + wordsLen[i] <= 80)
		{
			length = length + 1 + wordsLen[i];
			cout << ' ';
			for (int j = 0; j < wordsLen[i]; j++)
				cout << words[i][j];
		}
		else//����õ��ʣ���ͬǰ���һ���ո������У�������س��͸õ��ʣ��������ñ������г���Ϊ���ʳ���  
		{
			cout << endl;
			length = wordsLen[i];
			for (int j = 0; j < wordsLen[i]; j++)
				cout << words[i][j];
		}
	}
	return 0;
}