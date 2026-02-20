#include <stdio.h>
int main()
{
    int n;
    long long count=0;
    scanf("%i",&n);
    long long a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%lld",& a[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        if (a[i]<=a[i+1])
        {
            continue;
        }
        else
        {
            count+=a[i]-a[i+1];
            a[i+1] = a[i];
        }
    }
    printf("%lld",count);
}
