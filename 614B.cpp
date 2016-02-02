#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> A;
    string nb="";
    int zeroes=0;
    string r = "shiz";

        int flag=0;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        int cnt1=0;
        int cnt0=0;
        for(int k=0;k<x.length();k++)
        {
            if(x[k]-'0' == 1)
            {
                cnt1++;
            }
            else if(x[k]-'0'==0)
            {
                cnt0++;
            }
        }

        if(x.length()==1 && cnt0==1)
        {
            //cout<<"woo!";
            nb = r;
            flag=1;
        }
        else if((cnt1+cnt0 !=x.length() || cnt1>1) && flag==0)
        {
            nb = x;
        }
        else
        {
            zeroes+=cnt0;
        }
    }
    if(nb==r)
    {
        cout<<"0";
        return 0;
    }
    if(nb=="")
    {
        nb="1";
    }
    while(zeroes--)
    {
        nb+="0";
    }
    cout<<nb<<endl;

}

