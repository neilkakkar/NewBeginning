
#include <bits/stdc++.h>

using namespace std;
#define sz 2005
pair<int,int> A[sz];

pair<long long int,long long int> d[sz];
//long long int d2[sz];
int main()
{
    long long int n,x1,y1,x2,y2;
    scanf("%I64d %I64d %I64d %I64d %I64d",&n,&x1,&y1,&x2,&y2);

    for(int i=0;i<n;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        A[i] = make_pair(x,y);
        d[i] = make_pair((x1-x)*(x1-x) +(y1-y)*(y1-y),(x2-x)*(x2-x) +(y2-y)*(y2-y));
    }
    //sort(d,d+n);
    long long minim=(long long int)1e19;
    long long temp;
    for(int i=0;i<n;i++)
    {
        temp=d[i].first;
        long long temp2=0;
        for(int j=0;j<n;j++)
        {
            if(d[j].first>temp)
                {
                    if(d[j].second>temp2)
                    {
                        temp2=d[j].second;
                    }
            }

        }
        long long ans=temp+temp2;
        if(ans<minim)
        {
            minim = ans;
        }
    }
    long long mR1=0;
    long long mR2=0;
    for(int i=0;i<n;i++)
    {
        if(d[i].second>mR2)
        {
            mR2=d[i].second;
        }
        if(d[i].first>mR1)
        {
            mR1=d[i].first;
        }
    }
    minim = min(minim,mR1);
    minim = min(minim,mR2);
    cout<<minim;

}
