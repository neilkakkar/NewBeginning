#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int sz= (int)2e8+4;

ll pent(ll i)
{
    return (i*(3*i-1))/2;
}
int ispent(ll r)
{
    //ll r =A[i]+A[j];
    ll n = (ll)((sqrt(24*r+1)+1)/6 +0.5);
    //ll x = A[j]-A[i];

    //ll p = (int)((sqrt(24*x+1)+1)/6 +0.5);
    //if((pent(n)==r || pent(n+1)==r || pent(n-1)==r)&&(pent(p)==x || pent(p+1)==x || pent(p-1)==x))return 1;
    if((pent(n)==r ||pent(n+1)==r || pent(n-1)==r ))return 1;
    return 0;
}

int ishex(ll r)
{
    ll n = (int)((sqrt(8*r+1)-1)/4+0.5);
    if(n*(2*n-1)==r) return 1;
    if((n-1)*(2*n-3)==r) return 1;
    if((n+1)*(2*n+1)==r) return 1;
    return 0;

}
ll tri(ll i)
{
    return (i*(i+1))/2;
}
int main()
{
    for(int i=286;i<sz;i++)
    {
        ll x = tri((ll)i);
        //cout<<x<<endl;
        if(ispent(x) && ishex(x))
        {
            cout<<x<<" "<<i<<endl;
            break;
        }

    }

}
