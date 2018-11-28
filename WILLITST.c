#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    while(n>1)
    {
        if(n%2==0)
            n = n/2;
        else
            n = 3*n+3;
        if(n%12==0)
        {
            printf("NIE");
            break;
        }
    }
    if(n==1)
        printf("TAK");
    return 0;
}
