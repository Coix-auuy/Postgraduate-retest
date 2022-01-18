#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[30];
	while(scanf("%s", str) != EOF)
	{
		stack<char> st;
		int k = 0;
		for(int i = 0; i < 26; i++)
		{
			while(!st.empty() && st.top() == str[k])	
				k++, st.pop();
			st.push(i + 'a');
		}
		while(!st.empty() && st.top() == str[k])	
				k++, st.pop();
		if(k > 25)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
