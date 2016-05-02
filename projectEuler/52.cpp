#include <bits/stdc++.h>

using namespace std;

int same(int a,int b)
{
    int A[10]={0};
    int B[10]={0};
    while(a>0)
    {
        A[a%10]++;
        a/=10;
    }

    while(b>0)
    {
        B[b%10]++;
        b/=10;
    }
    for(int i=0;i<10;i++)
    {
        if(A[i]!=B[i])return 0;
    }
    return 1;
}
int main()
{
    int sz=(int)1e6;

    for(int i=1;i<sz;i++)
    {
        int x = i;
        int flag=1;
        for(int j=1;j<7;j++)
        {
            if(!same(x,i*j))flag=0;
        }
        if(flag)
        {
            cout<<i<<endl;
            break;
        }
    }

}
