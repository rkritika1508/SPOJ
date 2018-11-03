#include<stdio.h>
#include<math.h>
int main()
{
    int T, i, n1, n2;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%d %d", &n1, &n2);
        for(int j=n1; j<=n2; j++)
        {
            if(isPrime(j)==1)
                printf("%d\n", j);
        }
        printf("\n");
    }
    return 0;
}
int isPrime(int num)
{
    int i;
    if(num==1)
        return 0;
    for(i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
