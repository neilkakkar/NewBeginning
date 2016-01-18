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

    for(int i=0;i<k;i++)
    {
        int l,p,score;
        cin>>l>>p;
        l--;p--;
        if(A[l][p]==0)
        {
            score=0;
            queue< pair<int,int> > q;
            q.push(make_pair(l,p));
            A[l][p]=-1;
            while(!q.empty())
            {
                pair<int,int> r = q.front();
                q.pop();
                int x1=r.first;
                int y1=r.second;
                if(A[x1-1][y1]==0){
                    q.push(make_pair(x1-1,y1));
                    A[x1-1][y1]=-1;
                }
                else if(A[x1-1][y1]==1){
                    //cout<<x1<<" "<<y1<<" increas1"<<endl;
                    score++;
                }
                if(A[x1][y1-1]==0){
                    q.push(make_pair(x1,y1-1));
                    A[x1][y1-1]=-1;
                }
                else if(A[x1][y1-1]==1){

                    //cout<<x1<<" "<<y1<<" increas2"<<endl;
                    score++;
                }
                if(A[x1+1][y1]==0){
                    q.push(make_pair(x1+1,y1));
                    A[x1+1][y1]=-1;
                }
                else if(A[x1+1][y1]==1){
                    score++;

                    //cout<<x1<<" "<<y1<<" increas3"<<endl;
                }
                if(A[x1][y1+1]==0){
                    q.push(make_pair(x1,y1+1));
                    A[x1][y1+1]=-1;
                }
                else if(A[x1][y1+1]==1){
                    score++;

                    //cout<<x1<<" "<<y1<<" increas4"<<endl;
                }
            }

            for(int i1=0;i1<n;i1++)
            {
                for(int j1=0;j1<m;j1++)
                {
                    if(A[i1][j1]==-1)
                    {
                        ans[i1][j1]=score;
                        //cout<<score<<endl;
                        A[i1][j1]=0;
                    }
                }
            }
            cout<<score<<endl;
        }
        else{
            cout<<ans[l][p]<<endl;
        }
    }

}

