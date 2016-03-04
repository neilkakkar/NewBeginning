#include <bits/stdc++.h>

using namespace std;

int A[26];
int B[26];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        for(int i=0;i<26;i++)
        {
            A[i]=0;
            B[i]=0;
        }
        string a,b;
        cin>>a>>b;
        for(int i=0;i<a.length();i++)
        {
            A[a[i]-'a']++;
        }
        for(int i=0;i<b.length();i++)
        {
            B[b[i]-'a']++;
        }
        int flag=0;
        for(int i=0;i<26;i++)
        {
            if(A[i]>0 && B[i]>0 && flag==0){
                cout<<"Yes\n";
                flag=1;
            }
        }
        if(flag==0)
            cout<<"No\n";

    }
}
