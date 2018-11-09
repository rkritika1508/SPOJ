#include <bits/stdc++.h>
using namespace std;
map<long long, long long> arr;
long long coins(long long n)
{
    if(n==0)
        return n;
    else if(!arr[n])
    {
        arr[n]= max(n,coins(n/2) + coins(n/3) + coins(n/4));
    }
    return arr[n];
}
int main()
{
    long long n,i;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%lld\n",coins(n));
    }
    return 0;
}

