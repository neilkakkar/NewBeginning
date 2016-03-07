#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5
#define ll long long
pair<ll,ll> A[sz];

map<ll,ll> X;
map<ll,ll> Y;
map<pair<ll,ll>, ll> Z;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        X[x]++;
        Y[y]++;
        A[i]=make_pair(x,y);
        Z[A[i]]++;
    }
    long long ans=0;

    //int t=0;
    for(int i=0;i<n;i++){
        ll x = X[A[i].first];
        ll y = Y[A[i].second];
        ll z = Z[A[i]];
        //cout<<x<<" "<<y<<" "<<z<<"\n";
        ans+=(x*(x-1))/2;
        ans+=(y*(y-1))/2;
        //if(x>1 && y>1)
        ans-=(z*(z-1))/2;
        X[A[i].first]=0;
        Y[A[i].second]=0;
        Z[A[i]]=0;

    }
    cout<<ans;


}
