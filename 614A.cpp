#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    long long int l,r,k;
    cin>>l>>r>>k;

    long long pow=1;
    while(pow<l)
    {
        pow = pow*k;
    }
    vector<long long> A;

    while(pow<=r && pow>=l)
    {
        A.push_back(pow);
        cout<<pow<<" ";
        pow = pow*k;
        if(pow<=0)
        {
            pow = r+1;
        }
    }

    if(A.empty())
    {
        cout<<"-1";
        return 0;
    }
    for(long long int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }

}
