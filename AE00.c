#include<stdio.h>
#include<math.h>
int main()
{
    int n, count=0;
    scanf("%d",&n);
    //counting no of rectangles
    for(int i=1; i<=sqrt(n);i++)
    {
        for(int j=i+1; i*j<=n;j++)
        {
            count++;
        }
    }
    count+=sqrt(n);
    printf("%d",count);
    return 0;
}
