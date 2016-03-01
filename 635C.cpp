#include <bits/stdc++.h>

using namespace std;
long long x,s;
long long cnt(long long a)
{
    long long b=(s-x)/2;
    long long cont=0;
    for(int i=0;i<64;i++)
    {
        if(a%2==1)
        {
            cont++;

        }
        a=a>>1;
    }
    return cont;
}
int main()
{
    //long long x,s;
    cin>>s>>x;
    long long xx = x;
    //cout<<r;
    if((s-x)%2!=0)
    {
        cout<<"0";
        return 0;
    }
    long long r =0;
    long long y = (s-x)/2;
    for(int i=0;i<64;i++)
    {
        if(x%2==1)
        {
            r++;
            if(y%2!=0)
            {
                cout<<"0";
                return 0;
            }
        }
        x=x>>1;
        y=y>>1;

    }
    r = __builtin_popcountll(xx);
    long long ans = (long long)pow(2,r);
    if(s==xx)
    {
        ans-=2;

    }
    cout<<ans;

}
