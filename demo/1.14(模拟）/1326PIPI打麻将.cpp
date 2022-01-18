#include<bits/stdc++.h>
using namespace std;
int main()
{
	char C;
	scanf(" %c", &C);
	//东-0、南-1、西-2、北-3
	int dir[4]; //从pipi开始逆时针 4 人的方位 
	switch(C) 
	{
		case 'E': dir[0] = 0; break;
		case 'S': dir[0] = 1; break;
		case 'W': dir[0] = 2; break;
		case 'N': dir[0] = 3; break;
	}
	for(int i = 1; i < 4; i++)
		dir[i] = (dir[i - 1] + 1) % 4;
	int ans[4];
	for(int i = 0; i < 4; i++)
		scanf("%d", &ans[i]);
	// 桌子逆时针旋转 
	for(int i = 0; i < 4; i++)
		dir[i] = (dir[i] - 1 + 4) % 4;
	for(int i = 1; i <= 7; i++)
	{
		int x, point;
		scanf("%d", &x);
		if(x == 5)	point = 8000;
		else if(x >= 6 && x<= 7)	point = 12000;
		else if(x >= 8 && x <= 10)	point = 16000;
		else if(x >= 11 && x <= 12)	point = 24000;
		else	point = 32000;
		// pipi 是东 
		if(dir[0] == 0)
		{
			ans[0] += point/2*3;
			for(int i = 1; i < 4; i++)
				ans[i] -= point / 2;
		}
		else
		{
			ans[0] += point;
			for(int i = 1; i < 4; i++)
			{
				if(dir[i] == 0)	ans[i] -= point / 2;
				else	ans[i] -= point / 4;
			}
		}
		for(int i = 0; i < 4; i++)
			dir[i] = (dir[i] - 1 + 4) % 4;
	}
	for(int i = 0; i < 4; i++)
		printf("%d ", ans[i]);
	return 0;
}
