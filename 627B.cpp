#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5
int A[sz];
int B[sz];
int main()
{
    int n;
    scanf("%d",&n);
    int ind=0;
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x!=0)
        {
            A[ind]=x;
            ind++;
        }
    }
    ind =0;
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x!=0)
        {
            B[ind]=x;
            ind++;
        }
    }
    ind=0;
    n--;
    vector<int> X;
    int j=0;
    for(j=0;j<n;j++)
    {
        if(B[j]==A[ind])
        {
            X.push_back(j);
        }
    }
    int flag=0;

    for(int i=0;i<X.size();i++)
    {
        int cA=(ind+1 )%n;
        int cB=(X[i]+1 )%n;
        while(1)
        {
            if(cA==ind && cB==X[i])
            {
                flag=1;
                break;
            }
            else if(A[cA]==B[cB])
            {
                cA++;
                cB++;
                cA=cA%n;
                cB=cB%n;
                //cout<<cA<<" "<<cB<<endl;
            }
            else if(A[cA]!=B[cB])
            {
                break;
            }

        }
        if(flag)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;


}

