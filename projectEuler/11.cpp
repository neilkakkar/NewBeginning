#include <bits/stdc++.h>

using namespace std;

long long int A[25][25];
int main()
{
    int sz=20;
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
                cin>>A[i][j];
        }
    }
    long long ans=0;

    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            //if(j+3<sz){
                ans = max(ans,A[i][j]*A[i][j+1]*A[i][j+2]*A[i][j+3]);
            //}
            //if(i+3<sz){
                ans = max(ans,A[i][j]*A[i+1][j]*A[i+2][j]*A[i+3][j]);
            //}
            //if(i+3<sz && j+3<sz){
                ans = max(ans,A[i][j]*A[i+1][j+1]*A[i+2][j+2]*A[i+3][j+3]);
            //}
        }
    }
    cout<<ans<<endl;
}
