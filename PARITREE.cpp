#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
vector<int> A[sz];
int M[sz][3];
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n,q;
        cin>>n>>q;
        for(int i=0;i<n;i++){
           A[i].clear();
        }
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            A[x].push_back(y);
            A[y].push_back(x);


        }

    }
}
