#include<stdio.h>
int count(float);
int main()
{
    float c;
    scanf("%f",&c);
    while(c)
    {
        printf("%d card(s)\n",count(c));
        scanf("%f",&c);
    }
    return 0;
}
int count(float c)
{
    int i=0;
    float sum=0;
    while(sum<c)
    {
        i++;
        sum += 1.00/(1.00+i);
    }
    return i;
}
