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
	// С��ӵ� i ������ 
	for(i = 0; i < m; i++)
	{
		
		int ans = i;
		// �� 
		for(j = 0; j < n; j++)
		{
			// 1.С��λ�ڵ�һ�У��Ҵ˸��ӵ���J 
			if(ans == 0 && arr[j][ans] == -1)
				break;
			// 2.С��λ�����һ�У��Ҵ˸��ӵ���K 
			if(ans == m - 1 && arr[j][ans] == 1)
				break;
			// 3.�K�J
			if(ans + 1 < m && arr[j][ans] == 1 && arr[j][ans + 1] == -1)
				break;
			if(ans - 1 >= 0 && arr[j][ans - 1] == 1 && arr[j][ans] == -1)
				break;
			// 4.����
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
