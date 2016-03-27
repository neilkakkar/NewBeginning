#include <bits/stdc++.h>

using namespace std;
#define sz 505
#define maxim (int)1e5
int A[sz];int B[sz];
int d[sz];
int Ad[sz];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>A[i];
    cin>>B[0];
    d[0]=0;
    for(int i=1;i<m;i++){
        cin>>B[i];
        d[i]=B[i]-B[i-1];
    }



}

