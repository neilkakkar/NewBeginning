#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    k--;
    int A[n];
    int num=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]>=A[k] && A[i]>0)
        {
            num++;
        }
    }
    cout<<num;
}
