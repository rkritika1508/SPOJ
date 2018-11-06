#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,j,men[1000],women[1000];
    long long sum;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        sum = 0;
        for(j=0; j<n; j++)
            cin>>men[j];
        for(j=0; j<n; j++)
            cin>>women[j];
        sort(men,men+n);
        sort(women, women+n);
        for(j=0; j<n; j++)
            sum += men[j]*women[j];
        cout<<sum<<endl;
    }
    return 0;
}
