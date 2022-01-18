#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	scanf("%d%d", &m, &n);
	queue<int> q;
	bool vis[1010] = {false};
	int word;
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &word);
		if(vis[word] == true) continue;
		else
		{
			if(q.size() < m) 
			{
				q.push(word);
			}
			else
			{
				vis[q.front()] = false;
				q.pop();
				q.push(word);
			}
			vis[word] = true;
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}
