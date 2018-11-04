#include<stdio.h>
int number_of_squares(int n)
{
    int sol = (n*(n+1)*(2*n+1))/6;
    return sol;
}
int main()
{
    int n,i;
    while(n!=0)
    {
        scanf("%d", &n);
        if(n==0)
            break;
        printf("%d\n", number_of_squares(n));
    }
    return 0;
}
