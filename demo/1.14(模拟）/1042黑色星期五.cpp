#include<bits/stdc++.h>
using namespace std;
int judge(int year)
{
	return year % 4 == 0 && year % 100 !=0 || year % 400 == 0;
}
int days[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int week[7] = {0};
		int t = 5;
		for(int i = 1900; i <= 1900 + n - 1; i++)
		{
			for(int j = 0; j < 12; j++)
			{
				week[t]++;
				t = (t + days[judge(i)][j]) % 7;
			}
		}
		printf("%d %d ", week[5],week[6]);
		for(int i = 0; i < 5; i++)
			printf("%d ", week[i]);
		printf("\n");
	}
	return 0;
}
