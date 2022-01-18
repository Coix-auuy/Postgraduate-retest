#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	priority_queue<long long> q;
	long long ans = 0, x;
	for(int i = 0; i < n; i++)
	{
		scanf("%lld", &x);
		q.push(x);
	}
	for(int i = 1; i <= m; i++)
	{
		x = q.top();
		q.pop();
		q.push(x / 2 - 50 * k * i);
	}
	for(int i = 0; i < n; i++)
	{
		x = q.top();
		q.pop();
		ans += (x + 100 * m * k);
	}
	printf("%lld\n", ans);
	return 0;
}
