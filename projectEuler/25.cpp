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

int main()
{
    string r1="1";
    string r2="1";
    string next = sum(r1,r2);
    int index=3;
    while(next.length()<1000)
    {
        string temp = next;

        next = sum(next,r2);
        r2 = temp;

        index++;
    }
    cout<<index<<endl;
}
