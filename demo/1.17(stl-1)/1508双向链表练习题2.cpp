#include<bits/stdc++.h>
using namespace std;
int rev = 0;// 标记是否翻转 
int main()
{
	int n, k, op, val, e;
	deque<int> q;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &e);
		q.push_back(e);
	}
	for(int i = 0; i < k; i++)
	{
		scanf("%d%d", &op, &val);
		if(op == 1)
		{
			rev^=1; 
		}
		else if(op == 2)
		{
			if(rev)
			{
				printf("%d\n", q.back());
				q.pop_back();
			}
			else
			{
				printf("%d\n", q.front());
				q.pop_front();
			}
		}
		else if(op == 3)
		{
			if(rev)
			{
				printf("%d\n", q.front());
				q.pop_front();
			}
			else
			{
				printf("%d\n", q.back());
				q.pop_back();
			}
		}
		else if(op == 4)
		{
			if(rev)
				q.push_back(val);
			else
				q.push_front(val);
		}
		else
		{
			if(rev)
				q.push_front(val);
			else
				q.push_back(val);
		}
	}
	return 0;
}
