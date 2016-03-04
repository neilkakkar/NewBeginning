#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char dic[26];
string A[100005];//[1005];

bool charcomp(char a,char b){
    if(a<='Z' && b>='a'){
                return false; //b < a
    }
    else if(a>='a' && b<='Z')return true;// a<b
    else if(a<='Z' && b<='Z'){
        return( dic[a-'A']<dic[b-'A']);
    }
    else return (dic[a-'a']<dic[b-'a']);

}
bool comp(string a,string b){
    int alen= a.length();//strlen(a);
    int blen = b.length();//strlen(b);
    if(alen==blen){
        for(int i=0;i<alen;i++){
            if(a[i]!=b[i])
                return charcomp(a[i],b[i]);
            //return true;
        }
        //return true;
    }
    else if(alen<blen)
    {
        for(int i=0;i<alen;i++)
        {
            if(a[i]!=b[i])
            return charcomp(a[i],b[i]);
        }
        return true;
    }
    else{//} if(alen>blen){
        for(int i=0;i<blen;i++){
            if(a[i]!=b[i])
            return charcomp(a[i],b[i]);
        }
        return false;
    }
}
int main() {
    freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    //scanf("%s",&s);
    cin>>s;
    for(int i=0;i<26;i++){
        dic[s[i]-'a']=i+'a';
    }
    //cout<<charcomp('q','r');
    //cout<<dic<<endl;
    int n;
    //scanf("%d",&n);
    cin>>n;
    for(int i=0;i<n;i++){
        //scanf("%s",&A[i]);
        cin>>A[i];
    }
    sort(A,A+n,comp);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}
