//����⣣2���ǹȲ���  
//�߼��ܼ򵥣���ֹ����Ϊ����nΪ1;�ݹ����Ϊ������process��n����  
//��Ϊż���򷵻�process(n/2);��Ϊ������process(n*3+1)  
#include <iostream>  
using namespace std;
int  process(int n)
{
	if (n == 1)   //��ֹ����  
	{
		cout << "End" << endl;
		return 1;
	}
	if (n % 2 == 0)
	{
		cout << n << "/2=" << n / 2 << endl;
		return process(n / 2); //��Ϊż���򷵻�process(n / 2)  
	}
	else
	{
		cout << n << "*3+1=" << n * 3 + 1 << endl;
		return process(n * 3 + 1);//��Ϊ�����򷵻�process(n*3+1)  
	}
}
int main()
{
	int n = 0;
	cin >> n;
	process(n);
	return 0;
}