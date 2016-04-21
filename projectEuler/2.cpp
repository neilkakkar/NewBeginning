#include <bits/stdc++.h>

using namespace std;
#define sz (int)4e6+2
#define ll long long

ll A[sz];
int main()
{
    ll ans=0;
    A[1]=1;
    A[2]=2;
    for(int i=3;i<sz;i++){
        A[i] = A[i-1]+A[i-2];
        if(A[i]>sz)break;
    }
    for(int i=2;i<sz;i++){
        if(A[i]%2==0 && A[i]<sz){
            ans+=A[i];
        }
    }
    cout<<ans<<endl;
}

