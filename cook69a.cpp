#include <bits/stdc++.h>

using namespace std;

bool comp(vector<int>A,vector<int>B)
{
    if(A[1]*A[2]==B[1]*B[2])
    {
        if(A[2]<B[2]){
                return true;
        }
        else if(A[2]>B[2]){
            return false;
        }
        else if(A[0]<B[0])
        return false;

        return true;

    }
    return (A[1]*A[2]<B[1]*B[2]);

}
int A[105];
int B[105];
vector<int> C[105];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        for(int i=0;i<105;i++){
            C[i].clear();
        }
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        for(int i=0;i<n;i++){
            C[i].push_back(i);
            C[i].push_back(A[i]);
            C[i].push_back(B[i]);
        }
        sort(C,C+n,comp);
        //for(int i=0;i<n;i++){
        //    cout<<C[i][0]<<" "<<C[i][1]<<" "<<C[i][2]<<endl;
        //}
        cout<<C[n-1][0]+1<<endl;
    }

}
