#include<stdio.h>
#include<math.h>
void count()
{
    unsigned long long n;
    unsigned long long num;
    scanf("%llu", &n);
    if(n%2==0)
        num = ((n*(n+2)*(2*n+1))/8);
    else
        num = ((n*(n+2)*(2*n+1)-1)/8);
    printf("%llu\n", num);
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
        count();
    return 0;
}
