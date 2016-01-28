#include <bits/stdc++.h>

using namespace std;
#define sz 1000006
int A[sz];
int main()
{
    int D,N;
    cin>>D>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    long long ans=0;
    for(int i=0;i<N-1;i++)
    {
        ans+=(D-A[i]);
    }
    cout<<ans;

}
