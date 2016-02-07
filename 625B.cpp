#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string r;
    cin>>s>>r;
    int rlen = r.length();
    int slen = s.length();
    vector<int> pos;
    for(int i=0;i<slen;i++)
    {
        int flag=0;
        for(int j=0;j<rlen;j++)
        {
            if(s[i+j]!=r[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            pos.push_back(i);
        }
    }
    int cnt=0;

    if(pos.size()==0)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<pos.size();i++)
    {
        int j=i+1;
        int flag=0;
        while(pos[i]+rlen-1>=pos[j])
        {
            flag=1;
            j++;
        }
        if(flag)
        i=j-1;

        /*if(i==pos.size()-1)
        {
            cnt++;
        }*/
        cnt++;
    }

    cout<<cnt;

}

