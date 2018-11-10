#include<stdio.h>
int main()
{
    int t;
    long long int num, k;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%lld",&k);
        num = 192 + (k-1)*250;
        printf("%lld\n",num);
    }
    return 0;
}
