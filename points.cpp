#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5

pair<int, bool> A[sz];
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int x,y;
        cin>>x>>y;
        A[2*i]=make_pair(x,true);
        A[2*i+1]=make_pair(y,false);

    }
    sort(A,A+2*N);
    int c=0;
    int ans=0;
    for(int i=0;i<2*N;i++){
            if(c && i)ans+=A[i].first-A[i-1].first;
            if(A[i].second)c++;
            else c--;

    }
    cout<<ans<<endl;

}
