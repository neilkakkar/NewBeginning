#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
int A[sz];
int main()
{
    long long int n,k;
    cin>>n>>k;

    k = min(k,n/2);
    long long ans=(n-1)*k;
    ans+=(n-2*k)*k;

    cout<<ans;

}

