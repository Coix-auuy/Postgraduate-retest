#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x = 0.0, y = 0.0;
	int m;
	char op[10];
	double dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
	double num;
	while(scanf("%d", &m) != EOF)
	{
		int dir = 0;
		x = 0.0, y = 0.0;
		for(int i = 0; i < m; i++)
		{
			scanf("%s", op);
			if(op[0] == 'T')
				dir = (dir + 1) % 4;
			else
			{
				scanf("%lf", &num);
				x += dx[dir] * num; y += dy[dir] * num;
			}
		}
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}
