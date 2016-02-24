#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string S,T;
    cin>>S>>T;

    int A[26]={0};
    int B[26]={0};
    int tog[26][26]={0};
    int H=0;
    int flag=-1;
    for(int i=0;i<n;i++)
    {
        if(S[i]!=T[i])
        {
            int s = S[i]-'a';
            int t = T[i]-'a';
            A[s]++;
            B[t]++;
            if(tog[t][s]==1)
            {
                flag=i;
            }
            tog[s][t]=1;
            H++;
        }
    }
    if(H==0 || H==1)
    {
        cout<<H<<endl;
        cout<<"-1 -1\n";
        return 0;
    }
    if(flag!=-1)
    {
        int i;
        for(i=0;i<flag;i++)
        {
            if(S[i]==T[flag] && T[i]==S[flag])
            {
                cout<<H-2<<endl;
                cout<<i+1<<" "<<flag+1;
                return 0;
            }

        }
    }
    for(int i=0;i<26;i++)
    {
        if(A[i]>0 && B[i]>0)
        {
            cout<<H-1<<endl;
            int x,y;
            for(int j=0;j<n;j++)
            {
                if(S[j]!=T[j])
                {
                    if(S[j]-'a'==i)
                    {
                        x=j;
                    }
                    else if(T[j]-'a'== i)
                    {
                        y=j;
                    }
                }
            }
            cout<<x+1<<" "<<y+1;
            return 0;
        }
    }
    cout<<H<<endl;
    cout<<"-1 -1";

}

