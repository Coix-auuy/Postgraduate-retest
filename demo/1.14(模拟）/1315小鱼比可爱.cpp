#include<bits/stdc++.h>
int main()
{
	int n;
	int a[1005] = {0};
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for(int i = 1; i <= n; i++)
	{
		int cnt = 0;
		for(int j = 1; j < i; j++)
			if(a[j] < a[i])
				cnt++;
		printf("%d ", cnt);
	}
	return 0;
}
