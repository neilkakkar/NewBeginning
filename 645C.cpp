#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5

int A[sz];
int dp[sz];
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ptr=0;
    if(s[0]=='0')A[0]=1;
    else A[0]=0;
    for(int i=1;i<n;i++){
        if(s[i]=='0'){
            A[i]=A[i-1]+1;
        }
        else{
            A[i]=A[i-1];
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0')
    }
    int ptr1,ptr2;
    ptr1=0;
    ptr2=0;
    int ans=sz;
    while(A[ptr1]==0){
        ptr1++;
    }
    ptr2=ptr1;
    if(ptr1!=0){
    while(A[ptr2]-A[ptr1-1]<k+1)
    {
        ptr2++;

    }
    }
    else{
        while(A[ptr2]<k+1){
            ptr2++;
        }
    }
    while(ptr2<n){
        ans = min(ans,ptr2-ptr1);
        ptr2++;

    }

}

