#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e3+5
int A[sz];

map<int, int> X;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        X[A[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            long long a = A[i];
            long long b = A[j];
            vector<int> R;
            if(a==0 && b==0)
            {
                ans = max(ans,X[a]);
                continue;
            }
            X[a]--;
            X[b]--;
            R.push_back(a);
            R.push_back(b);
            long long c = a+b;
            int temp=2;
            while(X[c]>0)
            {
                X[c]--;
                R.push_back(c);
                temp++;
                a=b;
                b=c;
                c=a+b;
            }
            ans = max(ans,temp);
            for(int z=0;z<R.size();z++)
            {
                X[R[z]]++;
            }
        }

    }
    cout<<ans;


}

