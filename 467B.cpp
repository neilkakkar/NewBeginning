#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int coun(int a)
{
    int ans=0;
    while(a!=0)
    {
        a = a&(a-1);
        ans++;
    }
    return ans;
}
int main()
{
    int N,M,K;
    cin>>N>>M>>K;
    int A[M];
    for(int i=0;i<M;i++)
    {
        cin>>A[i];
    }
    int Fed;
    cin>>Fed;
    int ans=0;
    for(int i=0;i<M;i++)
    {
        int diff=coun(Fed^A[i]);
        if(diff<=K)
        {
            ans++;
        }
    }
    cout<<ans;

}


