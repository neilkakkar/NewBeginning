#include <bits/stdc++.h>

using namespace std;

int sum(string s)
{
    int ans=0;
    while(s.length()>0)
    {
        ans+=s[0]-'0';
        s = s.substr(1);
    }
    return ans;
}
int main()
{
    int s,m;
    cin>>m>>s;
    string mi[m+1][s+1];
    string ma[m+1][s+1];

    for(int i=0;i<=s;i++)
    {
        if(i<=9)
        ma[1][i]=""+i;
        else
            ma[1][i]="-1";
    }
    for(int i=2;i<=m;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=j;k++)
            {
                if(sum(ma[i][j])>sum(ma[i-1][j-k]+k))
                ma[i][j] = max(sum(ma[i][j]),sum(ma[i-1][j-k]+k));
                else
                    ma[i][j] = ma[i-1][j-k]+k;
            }
            ma[i][j] =
        }
    }

}
