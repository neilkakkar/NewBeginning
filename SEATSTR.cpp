#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
#define MOD ((int)1e9+7)
long long fac[sz];

long long d[sz];
long long dsum[sz];
int main()
{
    fac[0]=1;
    for(long long i=1;i<sz;i++){
            fac[i]=(i*fac[i-1])%MOD;
    }
    d[0]=0;d[1]=0;d[2]=1;
    for(long long i=3;i<sz;i++){
        d[i] = ((i-1)*(d[i-1]+d[i-2])) %MOD;
    }
    dsum[0]=d[0];
    for(int i=1;i<sz;i++){
        dsum[i]=(dsum[i-1]+d[i]) %MOD;
    }
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int n = s.length();

        if(n<=3){cout<<"0"<<endl;}
        else{
        long long ans = (fac[n]*(d[n]-dsum[n-1]))%MOD;
        cout<<ans<<endl;
        }


    }


}
