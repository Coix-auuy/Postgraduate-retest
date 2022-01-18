#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char c;
	while(scanf("%d %c", &n, &c) != EOF)
	{
		int t = sqrt((n + 1) / 2.0);
		int p = 1 + (t - 1) * 2;
		for(int i = 1; i <= t; i++)
		{
			for(int j = 1; j < i; j++)
				printf(" ");
			for(int j = 1; j <= p; j++)
				printf("%c", c);
			printf("\n");
			p -= 2;
		}
		p = 3;
		for(int i = t - 1; i >= 1; i--)
		{
			for(int j = 1; j < i; j++)
				printf(" ");
			for(int j = 1; j <= p; j++)
				printf("%c", c);
			printf("\n");
			p += 2;
		}
		printf("%d\n", (int)(n - (2 * pow(t,2) - 1)));
	}
	return 0;
}
