#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e3+5
#define ll long long
ll int A[sz];
ll int B[sz];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    long long int maxA=0;
    //long long int maxB=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            long long ansA=0;
            long long ansB=0;
            for(int k=i;k<=j;k++)
            {
                ansA= ansA | A[k];
                ansB = ansB | B[k];
            }
            maxA = max(maxA,ansA+ansB);
        }
    }
    cout<<maxA;
}

