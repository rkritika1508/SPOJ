#include<stdio.h>
void ap()
{
    long long int third, third_last, sum, n, d, a;
    scanf("%lld %lld %lld", &third, &third_last, &sum);
    // a + 2d = third, a + (n-3)d = third_last
    n = (2*sum)/(third+third_last);
    d = (third_last-third)/(n-5);
    a = third - 2*d;
    printf("%lld\n", n);
    for(int i=0; i<n; i++)
        printf("%lld ", a+i*d);
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
        ap();
    return 0;
}
