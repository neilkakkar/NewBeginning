#include <bits/stdc++.h>

using namespace std;

#define sz (int)1e5+5

int A[sz];
int B[sz];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        B[i]=0;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        B[A[i]]=B[A[i]-1]+1;
        ans = max(ans,B[A[i]]);
    }
    cout<<n-ans;

}
