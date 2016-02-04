#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    int A[N];
    long long ans=0;
    int X;
    cin>>X;
    ans+=X;
    A[0]=X;
    for(int i=1;i<N;i++)
    {
        int x;
        cin>>x;
        for(int j=x;j>=0;j--)
        {
            int flag=0;
            for(int r=0;r<=i;r++)
            {
                if(A[r]==j)
                {
                    flag=1;
                    break;
                }
            }
            if(!flag){
            A[i]=j;
            ans+=j;
            break;
            }
        }
    }
    /*for(int i=0;i<N;i++)
    {
        cout<<A[i]<<" ";
    }*/
    cout<<ans;

}

