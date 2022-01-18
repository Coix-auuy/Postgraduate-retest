#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		int ans = 0;
		char op[20];
		int a[105] = {0};
		char s[3];
		for(int i = 1; i <= n; i++)
		{
			scanf("%s", op);
			if(op[0] == 'L') a[i] = -1;
			else if(op[0] == 'R') a[i] = 1;
			else
			{
				int x = 0;
				scanf("%s%d", s, &x);
				a[i] = a[x];
			}
			ans += a[i];
		}
		printf("%d\n", ans);
	}
	return 0;
}
