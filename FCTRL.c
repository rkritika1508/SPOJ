#include<stdio.h>
int main()
{
    int T,N;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        scanf("%d", &N);
        printf("%d\n", zeroes(N));
    }
    return 0;
}
int zeroes(num)
{
    int trailing_zeroes = 0;
    while(num>=5)
    {
        trailing_zeroes+=num/5;
        num=num/5;
    }
    return trailing_zeroes;
}
