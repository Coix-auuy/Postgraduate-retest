#include<bits/stdc++.h>
using namespace std;
int judge(int year)
{
	return year % 4 == 0 && year % 100 !=0 || year % 400 == 0;
}
int days[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
int main()
{
	int year, mouth, day;
	int ans;
	while(scanf("%d/%d/%d", &year, &mouth, &day) != EOF)
	{
		ans = day;
		for(int i = 0; i < mouth - 1; i++)
			ans += days[judge(year)][i];
		printf("%d\n", ans);
	}
	return 0;
}
