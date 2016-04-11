#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5

vector<pair<int,int> > A[sz];
vector<pair<int,int> > B[sz];
int d[sz];
int visited[sz];

int solve(int i)
{
    if(d[i]!=-1)return d[i];
    else{
            int ans=0;
        for(int j=0;j<B[i].size();j++){
                //cout<<i<<" "<<B[i][j].first<<" \n";
            ans = max(ans,solve(B[i][j].first)+B[i][j].second);
        }
        for(int j=0;j<B[i].size();j++){
            for(int k=0;k<B[i].size();k++){
                if( j!=k && solve(B[i][j].first) < B[i][j].second + B[i][k].second + d[B[i][k].first]){
                ans = min(ans,B[i][j].second+B[i][k].second+d[B[i][k].first]);
                //cout<<i<<" "<<B[i][j].first<<" "<<B[i][k].first<<" \n";
                }

            }
        }
        d[i]=ans;
        return d[i];
    }
}
int create(int i)
{
    for(int j=0;j<A[i].size();j++)
    {
        int u = A[i][j].first;
        int w = A[i][j].second;
        if(!visited[u])
        {
            B[i].push_back({u,w});
            visited[u]=1;
            create(u);
        }
    }
}
int main()
{

    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int ans=0;
        for(int i=0;i<sz;i++){
            d[i]=-1;
            visited[i]=0;

        A[i].clear();
        B[i].clear();
        }
        for(int i=1;i<N;i++)
            {
                int u,v,w;
                cin>>u>>v>>w;
                A[u].push_back({v,w});
                A[v].push_back({u,w});

                //ans = max(ans,w);
        }
        visited[1]=1;
        create(1);
        for(int i=1;i<=N;i++){
            if(B[i].size()==0)
            {
                d[i]=0;
            }
        }

        solve(1);
        //cout<<ans<<endl;
        for(int i=1;i<=N;i++){
            cout<<d[i]<<"\n";
        }
    }
}
