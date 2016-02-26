#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.in","r",stdin);
    freopen("output.txt","w",stdout);
    int N;
    cin>>N;
    for(int X=1;X<=N;X++)
    {
        int C;
        cin>>C;
        int I;
        cin>>I;
        int A[I];
        for(int i=0;i<I;i++)
        {
            cin>>A[i];
        }
        int flag=0;
        for(int i=0;i<I;i++)
        {
            for(int j=0;j<I;j++)
            {
                if(i!=j && A[i]+A[j]==C)
                {
                    printf("Case #%d: %d %d\n",X,min(i,j)+1,max(i,j)+1);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
}
