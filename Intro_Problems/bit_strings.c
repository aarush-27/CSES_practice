#include <stdio.h>
 
#define MOD 1000000007
 
long long power(long long base, long long exp)
{
    long long result = 1;
 
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * base) % MOD;
 
        base = (base * base) % MOD;
        exp /= 2;
    }
 
    return result;
}
 
int main()
{
    long long n;
    scanf("%lld", &n);
 
    printf("%lld\n", power(2, n));
}
