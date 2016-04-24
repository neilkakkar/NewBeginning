#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int> > A;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
pair<int,int> reduce(int a,int b)
{
    if(a%10==b/10)
    {
        a = a/10;
        b = b%10;
    }
    else if(a/10==b%10)
    {
        a = a%10;
        b = b/10;
    }
    else return {-1,-1};

    int g = gcd(a,b);
    return {a/g,b/g};
}
int main()
{
    pair<int,int> ans;
    ans = {1,1};
    for(int i=11;i<100;i++)
    {
        if(i%10!=0)
        for(int j=i+1;j<100;j++)
        {
            if(j%10!=0)
            {
                int r = gcd(i,j);
                pair<int,int> x = reduce(i,j);
                if(x.first==-1)continue;

                if(i/r ==x.first && j/r ==x.second)
                {
                    ans.first*=x.first;
                    ans.second*=x.second;
                    cout<<i<<"/"<<j<<endl;
                }


            }

        }
    }
    int w = gcd(ans.first,ans.second);
    cout<<ans.second/w<<endl;

}
