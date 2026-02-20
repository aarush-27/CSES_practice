#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
 
    if (n%4==0)
    {
        printf("YES\n");
 
        int a[n], b[n];
        int j=0, k=0;
 
        for (int i=1;i<=n/2;i++)
        {
            if (i%2)
            {
                a[j++] = i;
                a[j++] = n-i+1;
            }
            else
            {
                b[k++] = i;
                b[k++] = n-i+1;
            }
        }
 
        printf("%d\n",j);
        for (int i=0;i<j;i++)
            printf("%d ",a[i]);
        printf("\n");
 
        printf("%d\n",k);
        for (int i=0;i<k;i++)
            printf("%d ",b[i]);
        printf("\n");
 
        return 0;
    }
 
    if (n%4==3)
    {
        printf("YES\n");
 
        int a[n], b[n];
        int j=0, k=0;
 
        // seed
        a[j++] = 1;
        a[j++] = 2;
        b[k++] = 3;
 
        int l=4, r=n, toggle=0;
 
        while (l<r)
        {
            if (toggle==0)
            {
                a[j++] = l;
                a[j++] = r;
            }
            else
            {
                b[k++] = l;
                b[k++] = r;
            }
            toggle ^= 1;
            l++;
            r--;
        }
 
        printf("%d\n",j);
        for (int i=0;i<j;i++)
            printf("%d ",a[i]);
        printf("\n");
 
        printf("%d\n",k);
        for (int i=0;i<k;i++)
            printf("%d ",b[i]);
        printf("\n");
 
        return 0;
    }
 
    printf("NO\n");
    return 0;
}
