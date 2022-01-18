#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m, n;
	char c;
	while(scanf("%d %d %c", &m, &n, &c) != EOF)
	{
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j < i; j++)
				printf(" ");
			if(i == 1 || i == m)
			{
				for(int j = 1; j <= n; j++)
					printf("%c", c);
			}
			else
			{
				for(int j = 1; j <= n; j++)
				{
					if(j == 1 || j == n)
						printf("%c", c);
					else
						printf(" ");
				}
					
			}
			printf("\n");
		}
	}
	return 0;
}
