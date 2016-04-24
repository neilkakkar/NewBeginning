#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int sz = (int)1e5;
ll fac[11];
ll facsum(ll a)
{
    ll ans=0;
    while(a>0)
    {
        ans+=fac[a%10];
        a = a/10;
    }
    return ans;
}
int main()
{
    fac[0]=1;
    for(int i=1;i<11;i++)
    {
        fac[i] = fac[i-1]*i;
        //cout<<fac[i]<<endl;
    }
    ll ans=0;
    for(int i=3;i<sz;i++)
    {
        if(i ==facsum(i))
        {
            ans+=i;
            cout<<i<<endl;
        }

    }
    cout<<ans;

}
