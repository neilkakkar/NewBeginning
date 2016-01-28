#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
    FILE* file;
    file=fopen("input.txt","r");

    int n,k;
    fscanf(file,"%d %d",&n,&k);
    //cin>>n>>k;
    int B[n+1];
    int A[n+1];
    for(int i=1;i<=n;i++)
    {
        fscanf(file,"%d",&B[i]);

        //cin>>B[i];
        A[i]=B[i];
    }
    sort(B+1,B+n+1,greater<int>());

    int tip = B[k];
    int cnt=0;
    FILE* file2;
    file2=fopen("output.txt","w+");
    fprintf(file2,"%d\n",tip);
    //cout<<tip<<endl;
    for(int i=1;i<=n;i++)
    {
        if(cnt==k)
        {
            break;
        }
        else
        {
            if(A[i]>=tip)
            {
                cnt++;
                fprintf(file2,"%d ",i);
                //cout<<i<<" ";
            }
        }

    }
}
