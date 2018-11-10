#include<stdio.h>
void distribution(long long n)
{
    long long sum=0,j,candy;
    for(j=0; j<n;j++)
    {
        scanf("%lld",&candy);
        sum+=candy%n;
    }
    if(sum%n==0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    long long t,i,n;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);
        distribution(n);
    }
    return 0;
}
