#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int A[100005];
//int B[100005];
int main()
{
    int n;
    cin>>n;
    //int A[n];
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int L=-1;
    int R=-1;
    A[0]=0;
    A[n+1]=(int)1e9;
    for(int i=1;i<=n;i++)
    {
        if(A[i]<A[i-1]){
            L=i-1;
            break;
        }
    }
    for(int i=n+1;i>0;i--)
    {
        if(A[i-1]>A[i])
        {
            R=i;
            break;
        }
    }
    //cout<<L<<" "<<R<<endl;
    if(L==-1 || R==-1){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    reverse(A+L,A+R+1);

    for(int i=1;i<=n;i++)
    {
        if(A[i]>A[i+1])
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<L<<" "<<R<<endl;


}
