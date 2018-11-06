#include<stdio.h>
int locate(int x, int y);
int main()
{
    int t, n1, n2;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d", &n1, &n2);
        locate(n1, n2);
    }
}
int locate(int x, int y)
{
    int j;
    if(x==y)
    {
        if(y%2==0)
            j=y*2;
        else
            j=2*y-1;
        printf("%d\n", j);
    }
    else if(y==x-2)
    {
        if(x%2==0)
            j = y+x;
        else
            j=y+x-1;
        printf("%d\n", j);
    }
    else
    {
        printf("No Number\n");
    }
    return 0;
}
