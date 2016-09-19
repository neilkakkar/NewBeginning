#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int MOD = (int)1e9+7;
const int sz = (int)1e5+100;
ll A[sz];

void go(ll * A,int n,int i,ll& ans,ll left,ll right,ll curr){
    if(i==n){
        ans+=curr;
        ans%=MOD;
        return;
    }
    ll xl = curr+left*A[i];
    xl%=MOD;
    ll xr = curr+right*A[i];
    xr%=MOD;
    go(A,n,i+1,ans,A[i],right,xl);
    go(A,n,i+1,ans,left,A[i],xr);
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;

        for(int i=0;i<=N;i++){
            cin>>A[i];
        }
        ll ans=0;
        go(A,N+1,1,ans,A[0],A[0],0);
        cout<<ans<<endl;
    }
}
