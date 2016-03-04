#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
#define ll long long
ll int A[sz];
ll int B[sz];

int mod(int a)
{
    if(a>0)
        return a;
    return -a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin>>T;
    while(T--){
    ll N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++) cin>>A[i];
    int ind=0;
    for(int i=0;i<N;i++){
        cin>>B[i];
        if(mod(B[i])>mod(B[ind]))
            ind=i;
    }
    long long ans=0;
    for(int i=0;i<N;i++)
    {
        ans+=A[i]*B[i];

    }
    if(B[ind]>0)
    ans+=K*B[ind];
    else
        ans-=K*B[ind];
    cout<<ans<<endl;
    }

}
