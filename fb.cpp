/*
Please write complete compilable code.
Read input from standard input (STDIN) and print output to standard output(STDOUT).
For more details, please check https://www.interviewstreet.com/recruit/challenges/faq/view#stdio
*/
#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int lvalue;
    int rvalue;
    int id;
    int balanced;
    vector<node*> leftnodes;
    vector<node*> rightnodes;
    node(){
        id=-1;
        lvalue = 0;
        rvalue = 0;
        balanced=0;
    }
};

int balance(node * x,vector<pair<int,int> >& ans)
{
    //if(x==null)return 0;
    if(x->balanced)return 10+x->lvalue+x->rvalue;
    int lw=x->lvalue;
    int rw=x->rvalue;
    for(int i=0;i<x->leftnodes.size();i++){
        lw+=balance(x->leftnodes[i],ans);
    }
    for(int i=0;i<x->rightnodes.size();i++){
        rw+=balance(x->rightnodes[i],ans);
    }
    if(lw>rw){
        ans[x->id].first = 0;
        ans[x->id].second = lw-rw;
        x->rvalue+=lw-rw;
    }
    else{
        ans[x->id].first = rw-lw;
        ans[x->id].second = 0;
        x->lvalue+=rw-lw;
    }
    x->balanced=1;
    return 10+2*max(lw,rw);

}
int main(){
    int n;
    cin>>n;
    vector<node*> nodes;
    for(int i=0;i<n;i++){
        node * next = new node();
        next->id=i;
        nodes.push_back(next);
    }
    for(int i=0;i<n;i++){
        int weight;
        cin>>weight;
        nodes[i]->lvalue=weight;
        string input;
        getline(cin,input);
        istringstream iss(input);
        int index;
        while(iss >> index)
        {
            nodes[i]->leftnodes.push_back(nodes[index]);
        }
        cin>>weight;
        nodes[i]->rvalue = weight;
        getline(cin,input);
        istringstream xss(input);
        while(xss >> index)
        {
            nodes[i]->rightnodes.push_back(nodes[index]);
        }
    }

    vector<pair<int,int> > ans(n);
    for(int i=0;i<n;i++)
        balance(nodes[i],ans);

    for(int i=0;i<n;i++){
        cout<<i<<": "<<ans[i].first<<" "<<ans[i].second<<endl;
    }

}
