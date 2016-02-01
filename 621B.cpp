#include <bits/stdc++.h>

using namespace std;

#define ll long long

int mod(ll int a)
{
    if(a<0)
        return -a;
    return a;
}


int main()
{
    ios_base::sync_with_stdio(0);
    int N;
    cin>>N;
    vector<pair<ll int,ll int> > A;
    for(int i=0;i<N;i++)
    {
        ll int x,y;
        cin>>x>>y;
        A.push_back(make_pair(x,y));
    }
    vector<pair<ll int,ll int> > B1;
    vector<pair<ll int,ll int> > B2;
    //for(int i=1;i<=1000;i++)
    {
        //int i=1;
        for(int j=2;j<=1000;j++)
        {
            //B.insert(make_pair(i,j));
            //B.insert(make_pair(j,i));
            B1.push_back(make_pair(1,j));
            B2.push_back(make_pair(1000,j));
            //B.push_back(make_pair(j,i));
            //B2.push_back(make_pair(1,j));
        }
        //B1.push_back(make_pair(1,1));
        //B2.push_back(make_pair(1000,1));
    }
    long long ans=0;
    long long temp1 = 0;
    long long temp2 = 0;
    for(int i=0;i<B1.size();i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if((B1[i].first - A[j].first)==(B1[i].second-A[j].second))
            {
                temp1++;
            }

            if((B1[i].first - A[j].first)==-(B1[i].second-A[j].second))
            {
                temp2++;
            }
        }
        ans+= (temp2* (temp2-1))/2;
        ans+= (temp1* (temp1-1))/2;
        temp1=0;
        temp2=0;
    }
    for(int i=0;i<B2.size();i++)
    {
        temp1=0;
        temp2=0;
        for(int j=0;j<A.size();j++)
        {
            if((B2[i].first - A[j].first)==(B2[i].second-A[j].second))
            {
                temp1++;
            }
            if((B2[i].first - A[j].first)==-(B2[i].second-A[j].second))
            {
                temp2++;
            }
        }
        ans+= (temp2* (temp2-1))/2;
        ans+= (temp1* (temp1-1))/2;
        temp1=0;
        temp2=0;
    }
    cout<<ans<<endl;
}
