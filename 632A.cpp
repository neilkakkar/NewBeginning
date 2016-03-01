#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    long long int ans=0;
    string A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    //ans = p/2;
    long long apples=0;
    for(int i=n-1;i>=0;i--)
    {
        if(A[i]=="halfplus")
        {
            ans+=(long long)p*(apples)+p/2;
            apples= apples*2 + 1;

        }
        else
        {
            ans+=(long long)p*apples;
            apples*=2;
        }
    }
    cout<<ans;

}

