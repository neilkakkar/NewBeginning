#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
#define ll long long
#define Mod (ll)(1e9+7)


ll A[sz];
int main()
{
    ios_base::sync_with_stdio(0);

    int T;
    cin>>T;
    while(T--)
    {
        long long N,x,M;
        cin>>N>>x>>M;

        for(int i=1;i<=N;i++)
        {
            if(i<=x)
            {
                cin>>A[i];
            }
            else
            {
                ll r;
                cin>>r;
            }
        }

        ll sum=0;
        ll pow=1;
        for(int i=1;i<=x;i++)
        {
            //sum = ((pow%MOD)*(sum%MOD) + (A[i]%MOD))%MOD;
            sum = ((sum%Mod)*(pow%Mod) + A[i]%Mod)%Mod;

            pow = ((pow%Mod)*(M%Mod))%Mod;
        }
        cout<<sum<<endl;

    }
}
