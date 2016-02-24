#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+4

int H[sz];
int V[sz];

vector<pair<char,int> > que;
vector<long long int> ans;
int main()
{
    int w,h,n;
    cin>>w>>h>>n;

    while(n--)
    {
        string s;
        cin>>s;
        int x;
        cin>>x;
        que.push_back(make_pair(s[0],x));
        if(s[0]=='V')
        {
            H[x]=1;
        }
        if(s[0]=='H')
        {
            V[x]=1;
        }
    }
    int Hmax=0;
    int temp=0;
    for(int i=0;i<w;i++)
    {
        if(H[i]==0)
        {
            temp++;
        }
        else
        {
            if(Hmax<temp)
            {
                Hmax = temp;
            }
            temp=1;
        }
        if(Hmax<temp)
            {
                Hmax = temp;
            }
    }
    int Vmax=0;
    temp=0;
    for(int i=0;i<h;i++)
    {
        if(V[i]==0)
        {
            temp++;
        }
        else
        {
            if(Vmax<temp)
            {
                Vmax = temp;
            }
            temp=1;
        }
        if(Vmax<temp)
            {
                Vmax = temp;
            }
    }
    Vmax = min(Vmax,h);
    Hmax = min(Hmax,w);
    ans.push_back(Hmax*(long long)Vmax);
    //cout<<Hmax<<" "<<Vmax;
    for(int i=que.size()-1;i>=0;i--)
    {
        if(que[i].first=='V')
        {
            H[que[i].second]=0;
            int tem=0;
            int ind = que[i].second;
            while(H[ind]==0 && ind>=0)
            {
                tem++;
                ind--;
            }
            ind = que[i].second+1;
            while(H[ind]==0 && ind<=w)
            {
                tem++;
                ind++;
            }
            Hmax = max(Hmax,tem);
            Hmax = min(w,Hmax);
            ans.push_back(Hmax*(long long)Vmax);

        }
        else
        {
            V[que[i].second]=0;
            int tem=0;
            int ind = que[i].second;
            while(V[ind]==0 && ind>=0)
            {
                tem++;
                ind--;
            }
            ind = que[i].second+1;
            while(V[ind]==0 && ind<=h)
            {
                tem++;
                ind++;
            }
            Vmax = max(Vmax,tem);
            Vmax = min(Vmax,h);
            //cout<<Hmax<<" "<<Vmax;
            ans.push_back(Hmax*(long long)Vmax);

        }
    }
    for(int i=ans.size()-2;i>=0;i--)
    {
        cout<<ans[i]<<endl;
    }

}

