#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int A[300006];
pair<int,int> Ans[1234567];
int main()
{
    ios_base::sync_with_stdio(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>A[i];
    }
    map<int,int> x;
    int start=1;
    int cnt=0;
    for(int i=1;i<=N;i++)
    {
        if(x.find(A[i])!=x.end())
        {
            Ans[cnt]=make_pair(start,i);
            start=i+1;
            cnt++;
            x.clear();
        }
        else
        {
            x[A[i]]++;
        }

    }
    if(cnt==0)
    {
        cout<<"-1"<<endl;
    }
    else{
        Ans[cnt-1].second = N;

        cout<<cnt<<endl;
        for(int i=0;i<cnt;i++)
        {
            cout<<Ans[i].first<<" "<<Ans[i].second<<endl;
        }
    }

}

