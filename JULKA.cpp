#include<bits/stdc++.h>
using namespace std;
string addition(string,string);
string subtraction(string a, string b);
string division(string a,int n);
int main()
{
    string total;
    string diff;
    string sub, div;
    for(int i=0; i<10; i++)
    {
        cin>>total;
        cin>>diff;
        string a, b, c;
        if(total=="0" && diff=="0")
        {
            cout<<"0"<<endl;
            cout<<"0"<<endl;
        }
        else if(total==diff)
        {
            string x = "0";
            a = x;
            b = x;
            cout<<total<<endl;
            cout<<b<<endl;
        }
        else
        {
            a = subtraction(total,diff);
            b = division(a,2);
            c = addition(b,diff);
            cout<<c<<endl;
            cout<<b<<endl;
        }
    }
    return 0;
}
string addition(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length()>str2.length())
        swap(str1, str2);
    // Take an empty string for storing result
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    // Add remaining digits of larger number
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');
    // reverse resultant string
    reverse(str.begin(), str.end());
    return str;
}
string subtraction(string a, string b)
{
    //a is total, b is diff
    string s = "";
    int n1 = a.length(), n2 = b.length();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int i, carry=0, sub;
    for(i=0; i<n2;i++)
    {
        sub=(a[i]-'0')-(b[i]-'0')-carry;
        if(sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        s.push_back(sub+'0');
    }
    for(i=n2;i<n1;i++)
    {
        sub = (a[i]-'0')-carry;
        if(sub<0)
        {
            sub = sub+10;
            carry=1;
        }
        else
            carry=0;
        s.push_back(sub+'0');
    }
//    i=s.length()-1;
//    while(s[i]=='0')
//        i--;
//    s.erase(i+1);
    reverse(s.begin(),s.end());
    return s;
}
string division(string a,int n)
{
    string s;
    int idx = 0;
    int temp = a[idx]-'0';
    while(temp<n)
        temp = temp*10+(a[++idx]-'0');
    while(a.size()>idx)
    {
        s += (temp/n) + '0';
        temp = (temp%n)*10 + (a[++idx] - '0');
    }
    return s;
}
