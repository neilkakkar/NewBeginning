#include <bits/stdc++.h>

using namespace std;

#define sz 350

vector<int> R;
int main()
{
    int N,M,Q;
    cin>>N>>M>>Q;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            int x;
            cin>>x;
            if(x>0)
            R.push_back(x);
        }
    }
    sort(R.begin(),R.end(),greater<int>());
    for(int i=0;i<Q;i++){
        int G;
        cin>>G;
        long long ans=0;
        while(G>0){
            for(int j=0;j<R.size();j++){
                ans+=G/R[j];
                G%=R[j];
            }
        }
        cout<<ans<<endl;
    }


}
