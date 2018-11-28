#include<bits/stdc++.h>
#include<string>
using namespace std;
void machula()
{
    int num1, num2, ans;
    string i1, i2, i3, i4, i5;
    cin>>i1>>i2>>i3>>i4>>i5;
    string str = "machula";
    // i1, i3, i5 are numbers; i2 is plus sign; i4 is equal sign
    if(strstr(i1.c_str(), str.c_str()))
    {
        num2 = stoi(i3);
        ans = stoi(i5);
        num1 = ans - num2;
    }
    else if(strstr(i3.c_str(), str.c_str()))
    {
        num1 = stoi(i1);
        ans = stoi(i5);
        num2 = ans - num1;
    }
    else
    {
        num1 = stoi(i1);
        num2 = stoi(i3);
        ans = num1 + num2;
    }
    cout<<num1<<" + "<<num2<<" = "<<ans<<"\n"<<endl;
}
int main()
{
    int t;
    //t = stoi(str);
    //cout<<t;
    cin>>t;
    cout<<"\n";
    for(int i=0; i<t; i++)
        machula();
    return 0;
}

