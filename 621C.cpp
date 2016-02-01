#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,P;
    cin>>N>>P;
    vector<pair<int,int> >A;
    for(int i=0;i<N;i++)
    {
        int l1,r1;
        cin>>l1>>r1;
        A.push_back(make_pair(l1,r1));
    }
    vector<int> R;
    for(int i=0;i<N;i++)
    {
        int l = A[i].first;
        int r = A[i].second;

        int lowdeck = P *(l/P);
        if(l%P!=0)
        {lowdeck+=P;
        };
        int highdeck = P*(r/P);
        int num = (highdeck -lowdeck)/P + 1;
        R.push_back(num);
        //cout<<R[i]<<" ";
    }
    double ans=0;

    for(int i=0;i<N;i++)
    {
        ans+=(2000)*((R[i]*(A[(i+1)%N].second-A[(i+1)%N].first+1) + R[(i+1)%N]*(A[i].second-A[i].first+1))/((A[(i+1)%N].second-A[(i+1)%N].first+1)*A[i].second-A[i].first+1));
    }
    cout<<setprecision(11)<<ans<<endl;
}
