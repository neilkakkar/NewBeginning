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

    for(int i=2;i<sz;i++){
        if(A[i]==0){
            primes.push_back(i);
        }
    }
    ll ans=0;
    ll n=1000000;
    ll i;
    for(i=2;i<n;i++)
    {
        ll r=(i*(i+1))/2;
        //ll s =(i+1);
        //if(r%2==0)r/=2;
        //else s/=2;
        int divisors =1;
        for(int j=0;j<primes.size();j++){
            if(primes[j]>r)break;
            if(r%primes[j]==0){
                int cnt=0;
                while(r%primes[j]==0){
                    cnt++;
                    r/=primes[j];
                }
                divisors*=(cnt+1);
            }
        }
        /*for(int j=0;j<primes.size();j++){
            if(primes[j]>s)break;
            if(s%primes[j]==0){
                int cnt=0;
                while(s%primes[j]==0){
                    cnt++;
                    s/=primes[j];
                }
                divisors*=(cnt+1);
            }
        }*/
        if(divisors>=500)break;
    }
    ans = (i*(i+1))/2;
    cout<<ans<<endl;
}


