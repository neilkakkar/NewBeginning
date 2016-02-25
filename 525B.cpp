#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5
int A[sz];

char X[sz];
void rev(int ind,int width)
{
    int slen = strlen(X);//.length();
    for(int i=0;i<width;i++)
    {
        char temp = X[ind+i];
        X[ind+i]=X[slen-ind-i-1];
        X[slen-ind-i-1]=temp;
    }
    //return X;
}
int main()
{
    //cout<<rev(0,2,"abcdef");
    //ios_base::sync_with_stdio(0);
    string s;
    //cin>>s;
    scanf("%s",&X);
    int m;
    cin>>m;
    int slen = strlen(X);

    for(int i=0;i<m;i++)
    {
        cin>>A[i];
        A[i]--;
    }
    sort(A,A+m);

    for(int i=0;i<m;i+=2)
    {
        int width;
        if(i+1>=m)
        {
            width = slen/2 - A[i];

        }
        else
            width= A[i+1]-A[i];
        rev(A[i],width);
    }
    //cout<<s;
    printf("%s",X);
}

