#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i;
	int arr[1010];
	while(scanf("%d", &n) && n != 0)
	{
		while(scanf("%d", &arr[0]) && arr[0] != 0) 
		{
			for(i = 1; i < n; i++)
				scanf("%d", &arr[i]);
			stack<int> st;
			int k = 0;
			for(i = 0; i < n; i++)
			{
				st.push(i + 1);
				while(!st.empty() && st.top() == arr[k])
				{
					st.pop();
					k++;
				}
			}
			if(k == n)
				printf("Yes\n");
			else
				printf("No\n");
		}
		printf("\n");
	}
	return 0;
}
