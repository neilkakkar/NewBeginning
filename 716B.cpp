#include <bits/stdc++.h>

using namespace std;

void populate(string& s,int l){
    int A[26]={0};
    for(int i=l;i<l+26;i++){
        if(s[i]!='?')A[s[i]-'A']++;
    }
    string r="";
    for(int i=0;i<26;i++){
        if(A[i]==0)r+=(i+'A');
    }
    int rptr=0;
    for(int i=l;i<l+26;i++){
        if(s[i]=='?'){
            s[i]=r[rptr];
            rptr++;
        }
    }

}
int main()
{
    string s;
    cin>>s;
    int slen = s.length();
    if(slen<26){
            cout<<"-1"<<endl;
            return 0;
    }
    int possible=0;
    for(int i=0;i<slen-26+1;i++){
        map<char,int> X;
        X['?']=0;
        int pos=0;
        for(int j=i;j<i+26 && j<slen;j++){
                if(s[j]=='?')X[s[j]]++;
                else if(X[s[j]]==1){
                        pos=1;
                        break;
                }
                else{
                    X[s[j]]=1;
                }
        }
        if(pos==0){
            populate(s,i);
            possible=1;
            break;
        }
    }
    if(possible){
        for(int i=0;i<slen;i++){
            if(s[i]=='?')s[i]='A';
        }
        cout<<s<<endl;
    }
    else cout<<"-1"<<endl;

}

