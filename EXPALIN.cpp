#include <bits/stdc++.h>

using namespace std;

#define sz (int)1e6+5

string A[sz];

int isPalin(string s)
{
    int len = s.length();
    int p1=0;
    int p2=len-1;
    while(p1<=p2)
    {
        if(s[p1]!=s[p2])
        {
            return 0;
        }
        p1++;
        p2--;
    }
    return 1;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;


    }
}
