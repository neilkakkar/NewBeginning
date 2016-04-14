#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//oops
int A[50][50];
int B[50][50];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
            {
            if(s[j]=='G')
                {
                A[i][j]=1;
                B[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
            int r=0;
            while(A[i][j]==1 && A[i+r][j]==1 && (i-r>=0) && A[i-r][j]==1 && A[i][j+r]==1 && (j-r>=0) && A[i][j-r]==1)
                {
                r++;
            }
            A[i][j]=r;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans=0;
    int a1=0,a2=0;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
            for(int k=0;k<A[i][j];k++)
                {
                a1=1+4*k;
                int temp=k;
                while(temp>0)
                    {
                    B[i][j]=0;
                    B[i+temp][j]=0;
                    B[i-temp][j]=0;
                    B[i][j+temp]=0;
                    B[i][j-temp]=0;
                    temp--;
                }
                for(int x=0;x<n;x++)
                    {
                    for(int y=0;y<m;y++)
                        {
                        for(int k2=0;k2<A[x][y];k2++)
                            {
                            if(B[x+k2][y]==1 && B[x-k2][y]==1 && B[x][y-k2]==1 && B[x][y+k2]==1 && B[x][y]==1)
                                {
                                a2=1+4*k2;
                                ans = max(ans,a1*a2);
                            }
                            else
                                {
                                //break;
                            }
                        }
                    }
                }
                for(int x=0;x<n;x++)
                    {
                    for(int y=0;y<m;y++)
                        {
                        B[x][y]=A[x][y];
                    }
                }


            }
        }
    }
    cout<<ans;
    return 0;
}

