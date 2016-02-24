#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;

    string names[n];
    int pizza[n];
    int taxi[n];
    int girl[n];
    for(int i=0;i<n;i++)
    {
        pizza[i] = 0;
        taxi[i] = 0;
        girl[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x>>names[i];

        for(int j=0;j<x;j++)
        {
            string r;
            cin>>r;
            if(r[0]>r[1] && r[1]>r[3] && r[3]>r[4] && r[4]>r[6] && r[6]>r[7])
            {
                pizza[i]++;
            }
            else if(r[0]==r[1] && r[1]==r[3] && r[3]==r[4] && r[4]==r[6] && r[6]==r[7])
            {
                taxi[i]++;
            }
            else
            {
                girl[i]++;
            }
        }

    }
    int maxP=-1;
    int maxT=-1;
    int maxG=-1;
    for(int i=0;i<n;i++)
    {
        if(pizza[i]>maxP)
        {
            maxP=pizza[i];
        }
        if(taxi[i]>maxT)
        {
            maxT=taxi[i];
        }
        if(girl[i]>maxG)
        {
            maxG=girl[i];
        }
    }
    vector<int> tind,pind,gind;
    for(int i=0;i<n;i++)
    {
        if(taxi[i]==maxT)
        {
            tind.push_back(i);
        }
        if(pizza[i]==maxP)
        {
            pind.push_back(i);
        }
        if(girl[i]==maxG)
        {
            gind.push_back(i);
        }
    }
    cout<<"If you want to call a taxi, you should call: ";
    for(int i=0;i<tind.size();i++)
    {
        if(i==tind.size()-1)
        {
            cout<<names[tind[i]]<<".";
        }
        else
        {
            cout<<names[tind[i]]<<", ";
        }
    }
    cout<<"\nIf you want to order a pizza, you should call: ";
    for(int i=0;i<pind.size();i++)
    {
        if(i==pind.size()-1)
        {
            cout<<names[pind[i]]<<".";
        }
        else
        {
            cout<<names[pind[i]]<<", ";
        }
    }
    cout<<"\nIf you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i=0;i<gind.size();i++)
    {
        if(i==gind.size()-1)
        {
            cout<<names[gind[i]]<<".";
        }
        else
        {
            cout<<names[gind[i]]<<", ";
        }
    }
}
