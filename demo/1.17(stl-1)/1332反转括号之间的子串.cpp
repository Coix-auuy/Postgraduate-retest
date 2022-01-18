#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	char s[105];
	while(scanf(" %s", s) != EOF)
	{
		list<char> l;
		for(int i = 0; i < strlen(s); i++)
		{
			if(s[i] != ')')
				l.push_back(s[i]);
			else
			{
				int k = 0;
				char t[105] = {'\0'};
				while(!l.empty() && l.back() != '(')
				{
					t[k++] = l.back();
					l.pop_back();
				}
				l.pop_back();
				for(int i = 0; i < k; i++)
					l.push_back(t[i]);
			}
		}
		for(list<char>::const_iterator it = l.begin(); it != l.end(); it++)
			printf("%c", *it);
		printf("\n");
	}
	return 0;
}
