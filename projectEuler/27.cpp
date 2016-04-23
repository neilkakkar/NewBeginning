#include <bits/stdc++.h>

using namespace std;
#define sz (ll)3e6+2
#define ll long long

int A[sz];
vector<ll> primes;

int isprime(int a)
{
    if(a<2)return 0;
    for(int i=0;i<primes.size();i++)
    {
        if(a%primes[i]==0 && a!=primes[i])return 0;
        if(a<primes[i])return 1;
    }
    return 1;
}
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
    long long ans=0;
    long long maxcnt=0;
    for(int i=999;i>=-999;i--)
    {
        for(int j=2;j<1000;j++)
        {
            int cnt=0;
            while(isprime(cnt*cnt + cnt*i + j))
            {
                cnt++;
            }
            cnt--;
            if(cnt>maxcnt)
            {
                maxcnt = cnt;
                ans = i*j;

                cout<<i<<" "<<j<<endl;
            }

        }
    }
    cout<<ans<<endl;
}
