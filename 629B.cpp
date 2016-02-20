
#include <bits/stdc++.h>

using namespace std;

int M[367]={0};
int F[367]={0};
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        int a,b;
        cin>>a>>b;
        if(x=="M")
        {
            for(int j=a;j<=b;j++)
            {
                M[j]++;
            }
        }
        else
        {
            for(int j=a;j<=b;j++)
            {
                F[j]++;
            }

        }

    }

    int ans=0;
    for(int i=1;i<367;i++)
    {
            if(min(M[i],F[i])>ans)
            {
                    ans=min(M[i],F[i]);
            }
    }
    cout<<2*ans;

}
