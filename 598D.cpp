#include <iostream>
#include <cstdio>
#include <math.h>
#include <bits/stdc++.h>

#define sz 1003
using namespace std;

int A[sz][sz];
int ans[sz][sz];
int main()
{
    ios_base::sync_with_stdio(0);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char t;
            cin>>t;
            if(t=='*'){
                A[i][j]=1;
            }
            else{
                A[i][j]=0;
            }
            ans[i][j]=0;
        }
    }

    int c[100005]={0};
    for(int i=1;i<=k;i++)
    {
        int l,p,score;
        cin>>l>>p;
        l--;p--;
        if(ans[l][p]==0)
        {
            score=0;
            queue< pair<int,int> > q;
            q.push(make_pair(l,p));
            A[l][p]=-1;
            ans[l][p]=i;
            while(!q.empty())
            {
                pair<int,int> r = q.front();
                q.pop();
                int x1=r.first;
                int y1=r.second;
                if(A[x1-1][y1]==0){
                    q.push(make_pair(x1-1,y1));
                    A[x1-1][y1]=-1;
                    ans[x1-1][y1]=i;
                }
                else if(A[x1-1][y1]==1){
                    //cout<<x1<<" "<<y1<<" increas1"<<endl;
                    score++;
                }
                if(A[x1][y1-1]==0){
                    q.push(make_pair(x1,y1-1));
                    A[x1][y1-1]=-1;

                    ans[x1][y1-1]=i;
                }
                else if(A[x1][y1-1]==1){

                    //cout<<x1<<" "<<y1<<" increas2"<<endl;
                    score++;
                }
                if(A[x1+1][y1]==0){
                    q.push(make_pair(x1+1,y1));
                    A[x1+1][y1]=-1;

                    ans[x1+1][y1]=i;
                }
                else if(A[x1+1][y1]==1){
                    score++;

                    //cout<<x1<<" "<<y1<<" increas3"<<endl;
                }
                if(A[x1][y1+1]==0){
                    q.push(make_pair(x1,y1+1));
                    A[x1][y1+1]=-1;

                    ans[x1][y1+1]=i;
                }
                else if(A[x1][y1+1]==1){
                    score++;

                    //cout<<x1<<" "<<y1<<" increas4"<<endl;
                }
            }

            c[i]=score;
            cout<<score<<endl;
        }
        else{
            cout<<c[ans[l][p]]<<endl;
        }
    }

}

