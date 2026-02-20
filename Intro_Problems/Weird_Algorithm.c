#include <stdio.h>
int main()
{
	int n;
	scanf("%i",&n);
	long long int t=n;
	if (t==1)
	{
		printf("1");
		return 0;
	}
	while(1)
	{
		printf("%lli ",t);
		if (t%2)
		{
			t = (3*t+1);
		}
		else
		{
			t = t/2;
		}
		if (t==1)
		{
		    printf("%lli",t);
			break;
		}
	}
	return 0;
}
