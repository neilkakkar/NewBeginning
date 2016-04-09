#include <bits/stdc++.h>

using namespace std;


    int A[1005];
    int B[1005];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    //for(int i=1;i<=n;i++)cout<<A[i]<<" ";
    //cout<<endl;
    if(n%2==0){
            B[1]=A[1];
        for(int i=2;i<=n/2;i++){
            B[2*i-1]=A[i];
        }
        int cnt=2;
        for(int i=n/2+1;i<=n;i++){
            B[cnt]=A[i];
            cnt+=2;
        }

    }
    else{
                B[1]=A[1];
        for(int i=2;i<=n/2+1;i++){
            B[2*i-1]=A[i];
        }
        int cnt=2;
        for(int i=n/2+2;i<=n;i++){
            B[cnt]=A[i];
            cnt+=2;
        }

    }
    for(int i=1;i<=n;i++){
            cout<<B[i]<<" ";
        }

}

