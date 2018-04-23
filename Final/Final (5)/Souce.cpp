#include <iostream>
#include <cstring>
using namespace std;

int m, n;//n��m��
char map[101][101];//��ͼ����
int already[101][101];//���ߵ�ͼ����
int min_count = 0;

void cross(int u, int v, int i, int j)
{
	int t = already[u][v];
	if (u == i && v == j)//��㼴Ϊ�����յ�
	{
		min_count = t;
	}
	t++;

	if (v < m - 1 && map[u][v + 1] != '#'  && already[u][v + 1]>t)//���Թ��ڡ��Ҳ��ǽ�Ҵ˵�û���߹�
	{
		already[u][v + 1] = t;//��Ǵ˵�Ϊ��t��
		cross(u, v + 1, i, j);//�Դ˵�Ϊ��������
	}
	if (u > 0 && map[u - 1][v] != '#'  && already[u - 1][v] > t)
	{
		already[u - 1][v] = t;
		cross(u - 1, v, i, j);
	}
	if (v > 0 && map[u][v - 1] != '#'  && already[u][v - 1] > t)
	{
		already[u][v - 1] = t;
		cross(u, v - 1, i, j);
	}
	if (u < n - 1 && map[u + 1][v] != '#' && already[u + 1][v]>t)
	{
		already[u + 1][v] = t;
		cross(u + 1, v, i, j);
	}
}

int main() {
	int startx, starty, endx, endy;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'S') {
				startx = i;
				starty = j;
			}
			if (map[i][j] == 'T') {
				endx = i;
				endy = j;
			}
		}
	}
	memset(already, 1, sizeof(already));//���ֽ�Ϊ��λ��ֵ��16843309
	already[startx][starty] = 0;
	cross(startx, starty, endx, endy);
	cout << min_count << endl;
	return 0;
}