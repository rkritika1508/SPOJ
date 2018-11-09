#include<stdio.h>
int main()
{
    int t,last_a,b_rem;
    long long int a,b;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%lld %lld", &a, &b);
        last_a = a%10;
        b_rem = b%4;
        if(b==0)
            printf("1\n");
        else if(last_a==0||last_a==1||last_a==5||last_a==6)
            printf("%d\n",last_a);
        else if(b_rem==1)
            printf("%d\n",last_a);
        else if(b_rem==2)
            printf("%d\n",(last_a*last_a)%10);
        else if(b_rem==3)
            printf("%d\n",(last_a*last_a*last_a)%10);
        else if(b_rem==0)
            printf("%d\n", (last_a*last_a*last_a*last_a)%10);
    }
    return 0;
}
