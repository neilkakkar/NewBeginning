#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5

int A[sz];
int main()
{
    int n;
    cin>>n;
    int mini=0;
    vector<int> ind;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]<=A[mini])
        {
            mini=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[mini])
        {
            ind.push_back(i);
        }
    }
    int maxD=0;
    for(int i=1;i<ind.size();i++)
    {
        int d = ind[i]-ind[i-1]-1;
        maxD=max(maxD,d);
    }
    maxD=max(maxD,n-ind[ind.size()-1]-1+ind[0]);
    long long ans= (long long)A[mini]*n;
    ans+=maxD;
    cout<<ans;
}

