#include <bits/stdc++.h>

using namespace std;
#define sz (ll)2e6
#define ll long long

int A[sz];
vector<ll> primes;
int main()
{
    for(ll i=2;i<sz;i++){
        if(A[i]==0){
            for(ll j=i*i;j<sz;j+=i){
                A[j]=1;
            }
        }
    }

    for(int i=2;i<sz;i++){
        if(A[i]==0){
            primes.push_back(i);
        }
    }
    ll ans=0;
    for(int i=0;i<primes.size();i++){
        ans+=primes[i];
        //else break;
    }
    cout<<ans<<endl;
}



