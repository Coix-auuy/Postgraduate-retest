#include<bits/stdc++.h> 
using namespace std;
struct node{
	long long x1, y1, x2, y2;
}arr[10005];
int main()
{
	int n, i;
	scanf("%d", &n);
	long long g,k;
	for(i = 1; i <= n; i++)
	{
		scanf("%lld%lld%lld%lld", &arr[i].x1, &arr[i].y1, &g, &k);
		arr[i].x2 = arr[i].x1 + g;
		arr[i].y2 = arr[i].y1 + k;
	}
	long long x, y;
	scanf("%lld%lld", &x, &y);
	for(i = n; i >= 1; i--)
	{
		if(arr[i].x1 <= x && x <= arr[i].x2 && arr[i].y1 <= y && y <= arr[i].y2)
			break;
	}
	if(i > 0)
		printf("%d", i);
	else
		printf("-1");
	return 0;
}
