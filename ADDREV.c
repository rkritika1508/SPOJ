#include<stdio.h>
int main()
{
    int T,i, n1, n2, sum;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%d %d", &n1, &n2);
        sum = reversenum(n1) + reversenum(n2);
        printf("%d\n", reversenum(sum));
    }
    return 0;
}
int reversenum(int num)
{
    int rev_num=0, remainder;
    while(num!=0)
    {
        remainder = num%10;
        rev_num = rev_num*10 + remainder;
        num = num/10;
    }
    return rev_num;
}
