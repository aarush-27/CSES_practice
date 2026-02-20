#include <stdio.h>
long long power(int a,int b)
{
	if (b==0)
	{
		return 1;
	}
	long long h = power(a,b/2);
	if (b%2)
	{
		return a*h*h;
	}
	else
	{
		return h*h;
	}
}
void hanoi(int n,int from, int to, int aux)
{
	if (n==0)
	{
		return 0;
	}
	hanoi (n-1,from , aux,to);
	printf("%d %d\n",from, to);
	hanoi (n-1,aux,to,from);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld\n",power(2,n)-1);
	hanoi(n,1,3,2);
}
