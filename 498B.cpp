#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,L;
    cin>>N>>L;
    int A[N+10];
    double d=0;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];

    }

    sort(A,A+N);
    for(int i=1;i<N;i++)
    {
        if(A[i]-A[i-1]>d)
        {
            d=A[i]-A[i-1];
        }
    }
    if(d<2*A[0])
    {
        d=2*A[0];
    }
    cout<<setprecision(11)<<max(d/2,(double)L-A[N-1]);

}



