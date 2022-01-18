#include<bits/stdc++.h>
using namespace std;
typedef struct node 
{
	char str[10100];
}lint;
lint arr[205];
bool cmp(lint a, lint b)
{
	// È¥Ç°µ¼ 0 
	int k, len;
	k = 0;
	for(int j = 0; j <= strlen(a.str); j++)
	{
		if(a.str[j] == '0')
			k++;
		else 
			break;
	}
	len = strlen(a.str) - k;
	for(int j = 0; j <= len; j++, k++)
		a.str[j] = a.str[k];
	
	k = 0;
	for(int j = 0; j <= strlen(b.str); j++)
	{
		if(b.str[j] == '0')
			k++;
		else 
			break;
	}
	len = strlen(b.str) - k;
	for(int j = 0; j <= len; j++, k++)
		b.str[j] = b.str[k];
		
	int lena = strlen(a.str), lenb = strlen(b.str);
	if(lena < lenb)
		return true;
	else if(lena > lenb)
		return false;
	else
	{
		for(int i = 0; i < lena; i++)
		{
			if(a.str[i] < b.str[i])
				return true;
			else if(a.str[i] > b.str[i])
				return false;
		}
//		91000
//		12000
	}
	return true;
}
int main()
{
	int n;
	while(scanf("%d", &n) != EOF) 
	{
		for(int i = 0; i < n; i++)
			scanf(" %s", arr[i].str);
		sort(arr, arr + n, cmp);
		for(int i = 0; i < n; i++)
			printf("%s\n", arr[i].str);
	}
	return 0;
}
