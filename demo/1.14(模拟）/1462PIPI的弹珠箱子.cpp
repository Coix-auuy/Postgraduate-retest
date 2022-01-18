#include<bits/stdc++.h>
using namespace std;
int arr[1010][1010];
int main()
{
	int n, m, i, j;
	scanf("%d%d", &n, &m);
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			scanf("%d", &arr[i][j]);
	// 小球从第 i 列落下 
	for(i = 0; i < m; i++)
	{
		
		int ans = i;
		// 行 
		for(j = 0; j < n; j++)
		{
			// 1.小球位于第一列，且此格子挡板↗ 
			if(ans == 0 && arr[j][ans] == -1)
				break;
			// 2.小球位于最后一列，且此格子挡板↘ 
			if(ans == m - 1 && arr[j][ans] == 1)
				break;
			// 3.↘↗
			if(ans + 1 < m && arr[j][ans] == 1 && arr[j][ans + 1] == -1)
				break;
			if(ans - 1 >= 0 && arr[j][ans - 1] == 1 && arr[j][ans] == -1)
				break;
			// 4.下落
			if(arr[j][ans] == -1) 
				ans--;
			else
				ans++;
		}
		if(j == n)
			printf("%d ", ans);
		else 
			printf("-1 ");
	}
	return 0;
}
