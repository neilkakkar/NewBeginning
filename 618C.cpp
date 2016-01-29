#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
#define MAX (long long)8e18
#define ll long long

pair<int,int> A[sz];
int main()
{
    int N;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>A[i].first>>A[i].second;
    }
    ll int x0=A[0].first;
    ll int y0=A[0].second;

    long long maxim=MAX;
    int index=0;
    for(int j=1;j<N;j++)
    {
        long long int x=A[j].first;
        long long int y=A[j].second;
        if( (x-x0)*(x-x0)+(y-y0)*(y-y0)<maxim)
        {
            index=j;
            maxim=(x-x0)*(x-x0)+(y-y0)*(y-y0);
        }
    }
    ll int x1=A[index].first;
    ll int y1=A[index].second;

    maxim=MAX;
    int index2=0;
    for(int j=1;j<N;j++)
    {
        if(j!=index)
        {
            ll int x=A[j].first;
            ll int y=A[j].second;
            long long check= y*(x0-x1)-y0*(x0-x1)-x*(y0-y1) + x0*(y0-y1);
            if( (x-x0)*(x-x0)+(y-y0)*(y-y0)<maxim && check!=0)
            {
                index2=j;
                maxim=(x-x0)*(x-x0)+(y-y0)*(y-y0);
            }
        }
    }
    if(index2==0)
    {
        while(1)
        {

        }
    }
    ll int x2=A[index2].first;
    ll int y2=A[index2].second;


    /*if(check==0)
    {
            maxim=MAX;
        int index3=0;
        for(int j=1;j<N;j++)
        {
            if(j!=index && j!=index2)
            {
                ll int x=A[j].first;
                ll int y=A[j].second;
                if( (x-x0)*(x-x0)+(y-y0)*(y-y0)>maxim)
                {
                    index3=j;
                    maxim=(x-x0)*(x-x0)+(y-y0)*(y-y0);
                }
            }
        }
        cout<<"1 "<<index+1<<" "<<index3+1;
    }
    else*/
    {
        cout<<"1 "<<index+1<<" "<<index2+1;
    }

}
