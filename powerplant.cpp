#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    int A[M];
    for(int i=0;i<M;i++)
    {
        cin>>A[i];
    }
    sort(A,A+M);
    int dmax=A[0];
    for(int i=1;i<M;i++)
    {
        if((A[i]-A[i-1])/2 >dmax)
        {
            dmax = (A[i]-A[i-1])/2;
        }
    }
    dmax = max(N-1 - A[M-1],dmax);
    cout<<dmax<<endl;
}
