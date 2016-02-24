#include <bits/stdc++.h>

using namespace std;

pair<string,string> reduce(string s1,string s2)
{
    int s1len=s1.length();
    int s2len=s2.length();
    if(s1len>s2len)
    {
        string ans="";
        int x = s1len-s2len;
        while(x--)
        {
            ans+='0';

        }
        s2 = ans+s2;
    }
    else if(s1len<s2len)
    {
        string ans="";
        int x = s2len-s1len;
        while(x--)
        {
            ans+='0';

        }
        s1 = ans+s1;
    }
    return make_pair(s1,s2);
}

void compare(string a,string b)
{
    //string r;
    if(a[0]>b[0])
    {
        cout<<">";
    }
    else if(a[0]<b[0])
    {
        cout<<"<";
        //return r;
    }
    else
    {
        if(a.length()==1)
        {
            cout<<"=";
        }
        else
        {
            a = a.substr(1);
            b = b.substr(1);
            compare(a,b);
        }
    }
}
int main()
{
    string a,b;
    cin>>a>>b;
    pair<string,string> x=reduce(a,b);
    a=x.first;
    b=x.second;
    //cout<<a<<b;

    if(a.length()>b.length())
    {
        cout<<">";
    }
    else if(a.length()<b.length())
    {
        cout<<"<";
    }
    else
    {
        compare(a,b);

    }
}
