#include<stdio.h>
#define MAX 500
int main()
{
    int t,i,num;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &num);
        factorial(num);
    }
    return 0;
}
int factorial(int n)
{
   int res[MAX];
   res[0]=1;
   int res_size = 1;
   for(int x=2; x<=n; x++)
   {
       res_size = multiply(x,res, res_size);
   }
   for(int x=res_size-1; x>=0; x--)
   {
       printf("%d", res[x]);
   }
   printf("\n");
   return 0;
}
int multiply (int x, int res[], int res_size)
{
    int carry = 0;
    for(int i=0; i<=res_size-1; i++)
    {
        int prod = res[i]*x+carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    while(carry!=0)
    {
        res[res_size]=carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
