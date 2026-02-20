#include <stdio.h>
int power(int a,int b)
{
    if (b==0)
    {
        return 1;
    }
    int h = power(a,b/2);
    if (b%2)
    {
        return a*h*h;
    }
    else
    {
        return h*h;
    }
}
int zeros(int n)
{
    int result = 0;
    for (int i=1;;i++)
    {
        if (power(5,i)>n)
        {
            return result;
        }
        result = result + n/power(5,i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",zeros(n));
}
