#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e6

int main()
{
    string s ="0123456789";

    for(int i=1;i<sz;i++)
    {
        next_permutation(s.begin(),s.end());
    }
    cout<<s<<endl;
}
