#include <bits/stdc++.h>

using namespace std;
#define sz 1e6+6

int main()
{
    int k;
    cin>>k;

    vector<int> ans;

    ans.push_back(1);
    k--;
    while(k--)
    {
        ans.push_back(1);
        while(ans[ans.size()-1]==ans[ans.size()-2])
        {
            ans[ans.size()-2]++;
            //cout<<ans[ans.size()-2]<<endl;
            ans.pop_back();
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}
