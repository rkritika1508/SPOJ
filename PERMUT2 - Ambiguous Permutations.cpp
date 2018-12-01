#include<iostream>
using namespace std;
void ambiguous(int n)
{
    int a[n], b[n], i, num, counter=0;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        num = a[i];
        b[num-1] = i+1;
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==b[i])
            counter++;
    }
    if(counter==n)
        cout<<"ambiguous"<<endl;
    else
        cout<<"not ambiguous"<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        ambiguous(n);
        cin>>n;
    }
    return 0;
}
