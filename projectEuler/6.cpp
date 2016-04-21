#include <bits/stdc++.h>

using namespace std;
#define sz (int)4e6+2
#define ll long long

ll A[sz];
int main()
{
    int n =100;
    ll ans=(((n*(n+1))/2)*(3*n*n+n-1))/6;

    ll ans2 =(n*(n+1))/2;
    ans2*=ans2;
    ans2 -=(n*(n+1)*(2*n+1))/6;
    cout<<ans2<<endl;
}


