#include <bits/stdc++.h>

using namespace std;
#define sz (int)5e4+5

int A[3*sz];
int main()
{
    int n,k;
    cin>>n>>k;
    int index=1;
    for(int i=1;i<=2*n;i++)
    {
        A[index++]=i;
    }
    index--;
    while(k--)
    {
        int temp = A[index];
        A[index]= A[index-1];
        A[index-1]=temp;
        index-=2;
    }
    for(int i=1;i<=2*n;i++)
    {
        cout<<A[i]<<" ";
    }

}
