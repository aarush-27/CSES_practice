#include <stdio.h>

int main()
{
	int n,c;
	scanf("%i",&n);
	int a[n+1];
	for (int i=0;i<=n;i++)
	{
		a[i] = 0;
	}
	for (int i=0;i<=n-1;i++)
	{
		scanf("%i",& c);
		a[c]++;
	}
	for (int i=0;i<=n;i++)
	{
		if (a[i] == 0 && i!=0)
		{
			printf("%i",i);
			break;
		}
	}
}
