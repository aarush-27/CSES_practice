#include <stdio.h>
int main()
{
    int a[26]={0};
    int c,n=0;
    while ((c=getchar())!=EOF && c!='\n')
    {
        a[c-'A']++;
        n++;
    }
    int odd_count=0;
    for (int i=0;i<26;i++)
    {
        if (a[i]%2)
        {
            odd_count++;
        }
    }
    if (odd_count>1)
    {
        printf("NO SOLUTION");
        return 0;
    }
    char palindrome[n+1];
    int l=0;
    int r=n-1;
    for (int i=0;i<26;i++)
    {
        while (a[i]>=2)
        {
            palindrome[l] = i+'A';
            palindrome[r] = i+'A';
            l++;
            r--;
            a[i]-=2;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 1)
        {
            palindrome[l] = i + 'A';
            break;
        }
    }
    palindrome[n] = '\0';
    printf("%s",palindrome);
}
