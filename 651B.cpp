#include <bits/stdc++.h>

using namespace std;
#define sz 1005

int A[sz];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A[x]++;
    }
    long long ans=0;
    while(1){
        int t=0;
        for(int i=1;i<sz;i++){
            if(A[i]>0){
                t++;
                A[i]--;
            }
        }
        if(t==0)break;
        ans+=t-1;
    }
    cout<<ans;

}

