#include<bits/stdc++.h>
using namespace std;
//next_permutation实现升序，而prev_permutation实现降序
int fact(int n)
{
	int sum = 1;
	for(int i = 1; i <= n; i++)
		sum *= i;
	return sum;
}
int main()
{
	int n;
	int a[10];
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			a[i] = i + 1;
		int cnt = fact(n);
		for(int i = 0; i < cnt; i++)
		{
			prev_permutation(a, a + n);
			for(int i = 0; i < n; i++)
				printf("%d ", a[i]);
			printf("\n");
		}
	}
	return 0;
}
