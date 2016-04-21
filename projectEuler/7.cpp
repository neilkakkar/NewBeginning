#include <bits/stdc++.h>

using namespace std;
#define sz (ll)1e6+2
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

    for(int i=1;i<sz;i++){
        if(A[i]==0){
            primes.push_back(i);
        }
    }
    cout<<primes[10001]<<endl;
}



