#include <bits/stdc++.h>

using namespace std;
const int sz = (int)1e5+5;

int A[sz];
int main()
{
    int n,h,k;
    cin>>n>>h>>k;

    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int ans=0;


    int curr=A[0];
    int it=1;
    while(curr>0){
        ans+=curr/k;
        curr=curr%k;
        if(it==n){
            if(curr!=0)ans++;

            break;
        }

        if(curr+A[it]<=h){
            curr=curr+A[it];
        }
        else{
            ans++;
            curr=A[it];
        }
        it++;
    }
    cout<<ans<<endl;


}

