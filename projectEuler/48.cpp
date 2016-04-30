#include <bits/stdc++.h>
//110846700

/*

I am not very proud of this implementation, since it is accurate upto 9 digits only, as after this it exceeds
the range of ull in c++. So, I had to guess the first digit.

*/
using namespace std;
#define ll unsigned long long
const ll MOD = (ll)1e9;
ll powe(ll a)
{
    ll ans=1;
    ll b = a;
    while(b)
    {
        if(b%2==1)
        {
            ans = (ans*a);
            ans%=MOD;
        }
        a = (a*a)%MOD;
        b/=2;
    }
    return ans%MOD;
}
const int sz = (int)1e3;
int main()
{
    //cout<<powe(34);
    ll res=0;
    for(ll i=1;i<=sz;i++)
    {
        res+=powe(i);
        res%=MOD;
    }
    cout<<res<<endl;

}
