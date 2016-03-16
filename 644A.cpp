#include <bits/stdc++.h>

using namespace std;
#define sz 105
int A[sz][sz];
int r,d;
int check(int i,int j){
    if(A[i-1][j]%2==0 && A[i][j-1]%2==0 && A[i][j+1]%2==0 && A[i+1][j]%2==0)return 1;
    else if(A[i-1][j]%2==1 && A[i][j-1]%2==1 && A[i][j+1]%2==1 && A[i+1][j]%2==1)return 2;
    return 0;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    d=(n%2==0?n/2:n/2 + 1);
    r=n/2;
    A[1][1]=d;
    d--;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j+=2){
            if(d==0)break;
            A[i][j]=d;
            d--;
        }
    }

}
