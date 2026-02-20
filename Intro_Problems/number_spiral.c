#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        long long y, x;
        scanf("%lld %lld", &y, &x);
        long long c;
        if (y<=x)
        {
            if (x%2)
            {
                c = x*x-y+1;
            }
            else
            {
                c = (x-1)*(x-1)+y;
            }
        }
        else
        {
            if (!(y%2))
            {
                c = y*y+1-x;
            }
            else
            {
                c = (y-1)*(y-1)+x;
            }
        }
        printf("%lld\n",c);
    }
 
    return 0;
}
