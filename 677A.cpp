#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int A[n+1];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(A[i]>h){
            ans+=2;
        }
        else{
            ans++;
        }
    }
    cout<<ans<<endl;


}

