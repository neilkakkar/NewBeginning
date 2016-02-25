#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e6+4

long long A[sz]={0};
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        A[x]++;
    }
    long long ans=0;
    long long l=0;

    for(int i=sz-2;i>=2;i--)
    {
        if(A[i]%2==1)
        {
            if(A[i-1]>0)
            {
                A[i]--;
                A[i-1]++;
            }
            else
            {
                A[i]--;
            }
        }
    }
    for(long long int i=sz-2;i>=2;i--)
    {
        if(A[i]>0){
        if(l==0)
        {
            ans+=(A[i]/4)*i*i;
            A[i]=A[i]%4;
            if(A[i]==2)
            {
                l=i;
            }
        }
        else
        {
            ans+=l*i;
            A[i]-=2;
            l=0;
            ans+=(A[i]/4)*i*i;
            A[i]=A[i]%4;
            if(A[i]==2)
            {
                l=i;
            }

        }
        }
    }
    cout<<ans;

}
