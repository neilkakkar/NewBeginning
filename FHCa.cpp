#include <bits/stdc++.h>

using namespace std;
#define sz 2005
#define ll long long
//pair<int,int> A[sz];
ll d(pair<ll,ll> x,pair<ll,ll> y){
    return (ll)(x.first-y.first)*(x.first-y.first)+(x.second-y.second)*(x.second-y.second);
}
ll dis[sz][sz];
int main(){
    ios_base::sync_with_stdio(0);
    int T;
    cin>>T;
    for(int index=1;index<=T;index++){
        int N;
        cin>>N;
        pair<int,int> A[N+1];
        map<ll,vector<pair<int,int> > > X;
        vector<ll> ds;
        for(int i=0;i<N;i++){
            int x,y;
            cin>>x>>y;
            A[i]=make_pair(x,y);
        }
        long long ans=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                dis[i][j]=d(A[i],A[j]);
                if(X[dis[i][j]].empty())ds.push_back(dis[i][j]);
                X[dis[i][j]].push_back(make_pair(i,j));
                //X[dis[i][j]].push_back(make_pair(j,i));
            }
        }
        for(int i=0;i<ds.size();i++){
                    if(ds[i]!=0){
                vector<pair<int,int> > r = X[ds[i]];
                for(int k=0;k<r.size();k++){
                        for(int j=0;j<r.size();j++){

                        if(r[k].first ==r[j].second && r[k].second!=r[j].first)ans++;
                        }
                    }
            }
        }
        cout<<"Case #"<<index<<": "<<ans/2<<endl;

    }
}
