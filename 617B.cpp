
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    long long int ans=1;
    long long int temp=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==1 && flag==0)
        {
            flag=1;
        }
        else if(A[i]==0 && flag==1)
        {
            temp++;
        }
        else if(A[i]==1 && flag==1)
        {
            //flag=0;
            temp++;
            ans*=temp;
            temp=0;
        }
    }
    if(flag==0)
    {
        cout<<"0";
        return 0;
    }
    cout<<ans;
}

