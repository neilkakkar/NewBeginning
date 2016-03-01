#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5

int A[sz];
int B[sz];

int given[sz];
int n;
void updateA(int ind,int val)
{
    //ind++;
    while(ind<=n)
    {
        A[ind]+=val;
        ind+=(ind& -ind);
    }
}

int SumA(int ind)
{
    int sum=0;
    //ind++;
    while(ind>0)
    {
        sum+=A[ind];
        ind-=(ind& -ind);

    }
    return sum;
}


void updateB(int ind,int val)
{
    //ind++;
    while(ind<=n)
    {
        B[ind]+=val;
        ind+=(ind& -ind);
    }
}

int SumB(int ind)
{
    int sum=0;
    //ind++;
    while(ind>0)
    {
        sum+=B[ind];
        ind-=(ind& -ind);

    }
    return sum;
}
void show()
{
    for(int i=0;i<=n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int k,a,b,q;
    cin>>n>>k>>a>>b>>q;


    for(int i=0;i<q;i++)
    {
        int p,q,r;
        cin>>p;
        if(p==1)
        {
            cin>>q>>r;
            int ta = SumA(q)-SumA(q-1);
            int tb = SumB(q)-SumB(q-1);
            if(ta+r<=a)
                updateA(q,r);
            else if(a-ta>0)
                updateA(q,a-ta);
            if(tb+r<=b)
                updateB(q,r);
            else if(b-tb>0)
                updateB(q,b-tb);
            //show();
        }
        else
        {
            cin>>q;

            cout<<SumB(q-1)+SumA(n)-SumA(q+k-1)<<endl;
        }
    }
}
