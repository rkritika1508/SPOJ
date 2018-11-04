#include<stdio.h>
int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    while(n1||n2||n3)
    {
        if(n2*n2==n1*n3)
        {
            printf("GP %d\n", n3*(n2/n1));
        }
        else if(n2-n1==n3-n2)
        {
            printf("AP %d\n", n3+n2-n1);
        }
        scanf("%d %d %d", &n1, &n2, &n3);
    }
    return 0;
}
