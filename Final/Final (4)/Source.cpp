#include<iostream>  
using namespace std;
struct point {//���Լ�¼ÿһ����  
	int x;//������  
	int y;//������  
};
int main() {
	int n;
	cin >> n;
	point points[100];//�����������еĵ�  
	for (int i = 0; i < n; i++)
		cin >> points[i].x >> points[i].y;
	point maxs[100];//�����������еļ����  
	int k = 0;
	for (int i = 0; i < n; i++) {
		bool max = true;//��ʼ�������û�б�֧��  
		for (int j = 0; j < n; j++) {
			if (j == i)
				continue;
			else if (((points[j].x >= points[i].x) && (points[j].y >= points[i].y)) == true)//�ж��Ƿ�֧�䣬���֧�䣬��max��Ϊ��  
				max = false;
		}
		if (max == true) {//��û�б�֧��ĵ㱣������  
			maxs[k] = points[i];
			k++;
		}
	}
	k--;//��Ϊ֮ǰ���һ�ζ���һ��k++,��������-����  
	for (int i = 0; i < k + 1; i++) {//����  
		for (int j = i + 1; j < k + 1; j++) {
			if (maxs[i].x > maxs[j].x) {
				point temp = maxs[i];
				maxs[i] = maxs[j];
				maxs[j] = temp;
			}
			else if (maxs[i].x == maxs[j].x&&maxs[i].y > maxs[j].y) {
				point temp = maxs[i];
				maxs[i] = maxs[j];
				maxs[j] = temp;
			}
		}
	}
	for (int i = 0; i < k + 1; i++) {//��������һ��û�У�  
		cout << '(' << maxs[i].x << ',' << maxs[i].y << ')';
		if (i == k)
			cout << endl;
		else
			cout << ',';
	}
	return 0;
}