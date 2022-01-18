#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	bool arr[105] = {false};
	//循环 n - 1 次去掉 n - 1 个人 
	int t = 0;
	for(int i = 1; i <= n - 1; i++)
	{
		for(int j = 1; j <= k;)
		{
			if(arr[t] == false)
			{
				if(j == k)
					arr[t] = true;
				j++;
				t = (t + 1) % (n);
			}
			else
				t = (t + 1) % (n);
		}
//		for(int i = 0; i < n; i++)
//			printf("%d ", arr[i]);
//		printf("\n");
	}
	
		
	for(int i = 0; i < n; i++)
		if(arr[i] == false)
		{
			printf("%d", i + 1);
			break;
		}
	return 0;
}
