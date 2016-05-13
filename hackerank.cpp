#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
const int sz = (int)5e3+5;
int A[8][sz];
int mins[8][sz];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
            mins[i][j]=INT_MAX;
        }
    }
    mins[0][0]=0;
    queue<pair<int,int> > bfs;
    bfs.push({0,0});
    while(!bfs.empty()){
        pair<int,int> r = bfs.front();
        bfs.pop();
        int x = r.first;
        int y = r.second;
        if(x-1>=0){
            if(mins[x-1][y]>mins[x][y]+A[x-1][y]){
                bfs.push({x-1,y});
                mins[x-1][y]=mins[x][y]+A[x-1][y];
            }
        }
        if(x+1<n){
            if(mins[x+1][y]>mins[x][y]+A[x+1][y]){
                bfs.push({x+1,y});
                mins[x+1][y]=mins[x][y]+A[x+1][y];
            }

        }
        if(y-1>=0){
            if(mins[x][y-1]>mins[x][y]+A[x][y-1]){
                bfs.push({x,y-1});
                mins[x][y-1]=mins[x][y]+A[x][y-1];
            }

        }
        if(y+1<m){
            if(mins[x][y+1]>mins[x][y]+A[x][y+1]){
                bfs.push({x,y+1});
                mins[x][y+1]=mins[x][y]+A[x][y+1];
            }

        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int q1,q2,q3,q4;
        cin>>q1>>q2>>q3>>q4;
        cout<<"check?\n";
        cout<<abs(mins[q3][q4]-mins[q1][q2])<<endl;
    }
    return 0;
}
