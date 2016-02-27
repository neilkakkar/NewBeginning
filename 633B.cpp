#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5

long long int A[sz];

int check(int x)
{
    int ans=0;
    int curr=5;
    for(int i=0;i<=7;i++)
    {
        ans+=x/curr;
        curr*=5;
    }
    return ans;
}
int main()
{
    //cout<<check(20025);
    long long int ans=0;
    long long int curr=25;
    for(int i=1;i<sz;i++)
    {
        ans+=5;
        curr=25;
        for(int x=1;x<=7;x++)
        {
            if(ans% (int)(curr)==0)
               {
                   i++;
               }
               curr*=5;
        }
        A[i] = ans;
        //cout<<A[i]<<endl;
    }
    int m;
    cin>>m;

    if(m==0)
    {
        cout<<"5\n0 1 2 3 4";
        return 0;
    }
    if(A[m]!=0)
    {
        cout<<5<<endl;
    }
    for(int i=0;i<5;i++)
    {
        if(A[m]!=0){
        cout<<A[m]+i<<" ";
        //return 0;
        }
        else
        {
            cout<<"0";
            return 0;
        }
    }
}

