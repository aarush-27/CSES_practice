#include <stdio.h>
int main() {
    long long n;
    scanf("%lld",&n);
    for (long long i=1;i<=n;i++)
    {
        printf("%lld\n",((i*i-1)*i*i/2)-4*(i-2)*(i-1));
    }
    return 0;
}
