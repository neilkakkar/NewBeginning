#include <bits/stdc++.h>

using namespace std;

string A[1000];
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    for(int I=1;I<=n;I++)
    {
        int cnt=0;
        while(cin>>A[cnt])
        {
            cnt++;
        }
        printf("Case #%d: ",I);
        for(int x=cnt-1;x>=0;x--)
        {
            cout<<A[x]<<" ";
        }
        cout<<endl;
    }
}
