#include <bits/stdc++.h>

using namespace std;

string reduce(string s)
{
    int slen=s.length();
    int index=0;
    while(s[index]=='0' && index<slen)
    {
        index++;
    }
    if(index==slen)
    {
        return "0";
    }
    s = s.substr(index);
    return s;
}

void compare(string a,string b)
{
    //string r;
    int flag=0;
    for(int i=0;i<a.length();i++){

        if(a[i]>b[i])
        {
            flag=1;
            cout<<">";
            break;
        }
        else if(a[i]<b[i])
        {
            flag=1;
            cout<<"<";
            break;
            //return r;
        }

    }if(flag==0)
    cout<<"=";
}
int main()
{
    string a,b;
    cin>>a>>b;
    a = reduce(a);
    b = reduce(b);
//    cout<<a<<b;

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
