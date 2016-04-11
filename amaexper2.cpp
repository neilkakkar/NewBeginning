#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int ans=0;

        for(int i=1;i<N;i++){
                int u,v,w;
        cin>>u>>v>>w;
        ans = max(ans,w);
        }
        cout<<ans<<endl;
        for(int i=1;i<N;i++){
            cout<<"0\n";
        }
    }
}

