#include <stdio.h>
int min(int a,int b)
{
    if (a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int max(int a,int b)
{
    if (a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if ((a+b)%3==0 && max(a,b)<=2*min(a,b))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
