#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        string s1;
        string s2;
        cin>>s1>>s2;
        int A[26];
        for(int i=0;i<26;i++)A[i]=0;

        int n= s1.length();
        for(int i=0;i<n;i++){
            A[s1[i]-'a']++;
        }
        int yes=0;
        for(int j=0;j<s2.length();j++){
            if(A[s2[j]-'a']>0){
                yes=1;
                break;
            }
        }
        if(yes)cout<<"Yes\n";
        else cout<<"No\n";
    }
}
