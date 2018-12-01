#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        int j, diff, total;
        int sum = 0;
        for(j=1;; j++)
        {
            sum += j;
            if(sum>=n)
                break;
        }
        diff = n-(sum-j);
        total = 1+j;
        // First term of diagonal will be 1/i and the sum of numerator and denominator is (1+i)
        if(j%2==0) //even
            printf("TERM %d IS %d/%d\n", n, diff, total-diff);
        else
            printf("TERM %d IS %d/%d\n", n, total-diff, diff);
        }
    return 0;
}
