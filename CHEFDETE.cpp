#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    int B[N+1];
    for(int i=1;i<=N;i++)
    {
        B[i]=0;
    }
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
        B[A[i]]++;
    }
    int cnt=0;
    for(int i=1;i<=N;i++)
    {
        if(B[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
