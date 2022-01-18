#include<bits/stdc++.h>
using namespace std;
int arr[10000005];
// ¿ìËÙÑ¡Ôñ
int partition(int low, int high)
{
	int t = arr[low];
	while(low < high)
	{
		while(low < high && arr[high] <= t) high--;
		arr[low] = arr[high];
		while(low < high && arr[low] >= t)	low++;
		arr[high] = arr[low];
	}
	arr[low] = t;
	return low;
}
// 3 2 1 4 5
void quickSelect(int k, int low, int high)
{
	if(low < high)
	{
		int pivot = partition(low, high);
		if(pivot == k)
			return;
		else if(pivot > k)
			quickSelect(k, low, pivot - 1);
		else
			quickSelect(k, pivot + 1, high);
	}
}
int main()
{
	
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	quickSelect(k - 1, 0, n - 1);
	printf("%d", arr[k - 1]);
	return 0;
}
