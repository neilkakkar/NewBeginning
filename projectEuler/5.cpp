#include <bits/stdc++.h>

using namespace std;
#define sz (int)4e6+2
#define ll long long

ll A[sz];
ll gcd(ll a,ll b)
{
    while(b)
    {
        ll r = a%b;
        a = b;
        b=r;
    }
    return a;
}
int main()
{
    ll ans=1;
    for(ll i=2;i<=20;i++){
        ans = ans*(i/gcd(ans,i));
    }
    cout<<ans<<endl;
}


