#include <bits/stdc++.h>

using namespace std;

const int sz = (int)1e6;

string str(int i)
{
    string t="";
    string r ="";
    while(i>0)
    {
        r=i%10+'0';
        i/=10;
        t = r+t;
    }
    return t;
}
int main()
{
    string s=".";
    for(int i=0;i<sz;i++)
    {
        s+=str(i);
    }
    int ans=1;
    int index =1;
    for(int i=0;i<=6;i++)
    {
        ans*=(s[index]-'0');
        cout<<index<<endl;
        index*=10;
    }
    cout<<ans<<endl;
}
