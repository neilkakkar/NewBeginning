#include <bits/stdc++.h>

using namespace std;
#define sz (int)5e5+5

long long int A[sz];
int main()
{
    int n;
    cin>>n;
    long long tot=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        tot+=A[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            A[i]=-A[i];
        }
    }
    long long int pref=0;
    long long int temp=0;
    int prefInd=-1;
    for(int i=0;i<n;i++)
    {
        temp+=A[i];
        if(temp>pref)
        {
            pref=temp;
            prefInd=i;
        }
    }
    long long int suff=0;
    int suffInd=-1;
    temp=0;
    for(int i=n-1;i>=0;i--)
    {
        temp+=A[i];
        if(temp>suff)
        {
            suff=temp;
            suffInd=i;
        }
    }

    long long  ans1=0;
    for(int i=0;i<=prefInd;i++)
    {

        if(A[i]<=0)
        ans1-=A[i];
    }
    for(int i=prefInd+1;i<n;i++)
    {
        if(A[i]>=0)
        ans1+=A[i];
    }
    long long ans2=0;
    for(int i=0;i<suffInd;i++)
    {
        if(A[i]>=0)
        ans2+=A[i];
    }
    for(int i=suffInd;i<n;i++)
    {
        if(A[i]<=0)
        ans2-=A[i];
    }
    //cout<<ans1<<" "<<ans2;
    cout<<tot-min(ans1,ans2);



}

