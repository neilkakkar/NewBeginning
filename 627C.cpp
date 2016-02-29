#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    long long s,a,b,x,xx;
    cin>>s>>x;
    xx=x;
    long long ans=1;
    long long i=0;
    a = s-x;
    a/=2;
    b = (long long)log2(s);
    if(a!=0)
    {
        b = max(b,(long long)log2(a));
    }
    while(i<=b)
    {
        if(a&1 && x&1 )
        {
            cout<<"0";
            return 0;
        }
        if(x&1)
        {
            ans*=2;
        }
            a/=2;x/=2;i++;/*
        else if(x&1==0)
        {
            a/=2;x/=2;i++;
        }*/

    }
    if(xx==s)
    {
        //cout<<"wohfo";
        ans-=2;
    }
    cout<<ans;

}
