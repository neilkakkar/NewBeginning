#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5

int A[sz];
int P[sz];
int main()
{
    //ios_base::sync_with_stdio(0);
    int n,m;
    //cin>>n>>m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
      //  cin>>A[i];
        scanf("%d",&A[i]);
    }
    P[0]=-1;
    P[1]=-1;
    for(int i=2;i<=n;i++)
    {
        if( A[i]!=A[i-1])
        {
            P[i] = i-1;
        }
        else
        {
            P[i] = P[i-1];
        }
    }
    for(int i=0;i<m;i++)
    {
        int l,r,x;
        //cin>>l>>r>>x;
        scanf("%d %d %d",&l,&r,&x);
        if(A[r]!=x)
        {
            //cout<<r<<endl;
            printf("%d\n",r);
        }
        else
        {
            if(P[r]>=l)
            {
                printf("%d\n",P[r]);
                //cout<<P[r]<<endl;
            }
            else
            {
                printf("-1\n");
            }
        }
    }

}

