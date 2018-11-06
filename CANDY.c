#include<stdio.h>
int distribution(int n)
{
    int a[n],i;
    int sum=0, no_of_candies, count=0;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        sum+=a[i];
    if(sum%n==0)
    {
        no_of_candies = sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]<no_of_candies)
                count+=no_of_candies-a[i];
        }
        return count;
    }
    else
        return -1;
}
int main()
{
    int n=1;
    while(n!=-1)
    {
        scanf("%d", &n);
        if(n!=-1)
        {
            printf("%d\n",distribution(n));
        }
    }
    return 0;
}
