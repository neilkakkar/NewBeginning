#include<bits/stdc++.h>

using namespace std;

#define sz (int)1e5+5
vector<int> A[sz];

int marked[sz];
vector< pair<int,int> >Q;
int main()
{
    int n,m;
    cin>>n>>m;
    int ans=-1;
    int rem=n-1;
    for(int i=1;i<=n;i++){
        marked[i]=0;
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        Q.push_back(make_pair(x,y));
        A[y].push_back(x);
    }
    for(int i=0;i<m;i++){
        int x=Q[i].first;
        int y = Q[i].second;
        if(marked[y]==0){
            rem--;
            //cout<<y<<endl;
        }
        marked[y]++;
        if(rem==0){
            ans=i;
            break;
        }

    }
    if(ans!=-1){


    }
    cout<<ans;


}
