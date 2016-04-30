#include <bits/stdc++.h>

using namespace std;
const int sz = (int)1e6+4;

int A[sz];

int check(int a,int b,int c)
{
    int diga[10]={0};
    int digb[10]={0};
    int digc[10]={0};
    while(a>0)
    {
        diga[a%10]++;
        a/=10;
    }
    while(b>0)
    {
        digb[b%10]++;
        b/=10;
    }
    while(c>0)
    {
        digc[c%10]++;
        c/=10;
    }
    for(int i=0;i<10;i++)
    {
        if(diga[i]!=digb[i] || digb[i]!=digc[i])return 0;
    }
    return 1;
}
int main()
{

    A[1]=1;
    for(int i=2;i*i<sz;i++)
    {
        if(A[i]==0)
        for(int j=i*i;j<sz;j+=i)
        {
            A[j]=1;
        }
    }

    for(int i=1000;i<(int)1e5;i++)
    {
        if(A[i]==0 && A[i+3330]==0 && A[i+6660]==0)
        {
            if(check(i,i+3330,i+6660))
            {
                cout<<i<<i+3330<<i+6660<<endl;
                //break;
            }
        }
    }
}

