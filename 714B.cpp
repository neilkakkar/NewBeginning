#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int n1,n2,n3,n4;
    n1=-1;
    n2=-1;
    n3=-1;
    n4=-1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(n1==-1)n1=x;
        else if(n2==-1 && n1!=x)n2=x;
        else if(n3==-1 && n1!=x && n2!=x)n3=x;
        else if(n4==-1 && n1!=x && n2!=x && n3!=x)n4=x;
    }
    if(n4!=-1)cout<<"NO";
    else cout<<"YES";

}

