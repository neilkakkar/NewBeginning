#include <bits/stdc++.h>

using namespace std;

#define sz 50004

int A[sz];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        sort(A,A+N);
        vector< pair<int,int> > X;
        for(int i=0;i<N;i++)
        {
            int cnt=1;
            while(A[i]==A[i+1])
            {
                i++;
                cnt++;
            }
            X.push_back(make_pair(A[i],cnt));
        }
        //priority_queue< pair<int,int>,vector<int>,greater<int> > pq (A,A+N);
        make_heap(X.begin(),X.end());
        int p1=0;
        int p2=N-1;
        int ans=0;
        while(p1<=p2)
        {
            if(A[p1]==A[p2])
            {
                ans+=p2-p1+1;
                break;
            }
            p1++;
            p2--;
            ans++;
        }
        cout<<ans<<endl;
    }
}
