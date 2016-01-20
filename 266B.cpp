#include <iostream>
#include <cstdio>

using namespace std;

string trans(string a)
{
    int alen = a.length();
    for(int i=0;i<alen-1;i++)
    {
        if(a[i]=='B' && a[i+1]=='G')
        {
            a[i]='G';
            a[i+1]='B';
            i++;
        }
    }
    return a;
}
int main()
{
    int N,T;
    cin>>N>>T;
    string s;
    cin>>s;
    while(T--)
    {
        s=trans(s);
    }
    cout<<s;
}
