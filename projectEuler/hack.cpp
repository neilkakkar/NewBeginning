#include <bits/stdc++.h>

using namespace std;

string reverse(string a)
{
    int alen = a.length();
    string s="";
    for(int i=alen-1;i>=0;i--){
        s+=a[i];
    }
    return s;
}
string sum(string a, string b)
{
    int alen = a.length();
    int blen = b.length();
    if(alen<blen)return sum(b,a);
    a = reverse(a);//.begin(),a.end());
    b = reverse(b);//.begin(),b.end());
    string c ="";
    int carr=0;
    int it=0;
    while(it<min(a.length(),b.length()))
    {
        int sum = carr + a[it]+b[it]-2*('0');
        carr = sum/10;
        sum = sum%10;
        c+=(sum+'0');
        it++;
    }
    for(int x=blen;x<alen;x++){
        int sum = carr + a[x]-('0');
        carr = sum/10;
        sum = sum%10;
        c+=(sum+'0');
        //c+=a[x];
    }
    if(carr!=0)
    c+=carr+'0';
    return reverse(c);
}
string multi(string s1,string s2)
{
    string r="";
    string ans="";
    while(r!=s2)
    {
        ans =sum(ans,s1);
        r = sum(r,"1");
    }
    return ans;
}
string A[22];
#define ll long long
int main()
{
    ll a,b,n;
    cin>>a>>b>>n;

    A[1]=""+a+'0';
    A[2]=""+b+'0';
    for(int i=3;i<=n;i++){
        A[i]=sum(multi(A[i-1],A[i-1]),A[i-2]);
    }
    cout<<A[n]<<endl;


}


