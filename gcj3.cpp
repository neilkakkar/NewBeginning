#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define sz (int)65537

int primes[sz]={0};
int main()
{
    freopen("primes.txt","w",stdout);

    for(ll i=2;i<sz;i++)
    {
        if(primes[i]==0)
        {

            for(ll j=i*i;j<sz;j+=i)
            {
                primes[j]=1;
            }
        }
    }
    cout<<"int primes[sz]={ ";
    int cnt=0;
    for(int i=2;i<sz;i++)
    {
        if(primes[i]==0)
        {
            cnt++;
            cout<<i<<",";

        }
    }
    cout<<"};\n";
    cout<<cnt;

}
