#include <bits/stdc++.h>

using namespace std;
#define sz (int)5e4+5

string A[sz];

void show(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;

    }
}

bool comp(string a,string b)
{
    int alen=a.length();
    int blen = b.length();
    if(alen==blen)
    {
        if(a>b)
        {
            return false;
        }
        return true;
    }
    else if(alen<blen)
    {
        for(int i=0;i<alen;i++)
        {
            if(a[i]>b[i])
            {
                return false;
            }
        }

        return true;
    }
    else
    {
        for(int i=0;i<blen;i++)
        {
            if(b[i]>a[i])
            {
                return true;
            }
        }
        return false;

    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    int mlen=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        int slen = A[i].length();
        if(slen>mlen)
            mlen=slen;

    }
    for(int i=0;i<n;i++)
    {
        int slen = A[i].length();
        if(slen<mlen)
        {
            for(int j=slen;j<mlen;j++)
            {
                //A[i]+="{";
            }
        }
    }
    sort(A,A+n,comp);
    show(n);
    string r="";
    for(int i=0;i<n;i++)
    {
        r+=A[i];

    }
    cout<<r;


}
