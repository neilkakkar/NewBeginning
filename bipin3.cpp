#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define MOD ((int)1e9+7)

ll powe(ll k, ll n){
    ll ans=1;
    ll base=k;
    while(n>0){
        if(n%2==0){
            n/=2;
            base*=base;
            base%=MOD;
        }
        ans= (ans*base)%MOD;
        n--;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin>>T;
    while(T--)
    {
        ll N,K;
        cin>>N>>K;
        ll ans=K;

        ans*=powe(K-1,N-1);
        cout<<ans%MOD<<endl;

    }
}
