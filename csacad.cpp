#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define sz (int)1e5+5
#define int long long

int A[sz];
pair<int,int> sum[sz];

int add[sz];

int mod(int a){
    if(a>0)return a;
    return -a;
}
main() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sum[0].first=0;
    for(int i=0;i<k;i++){
        sum[0].first+=A[i];
        sum[0].second =0;
    }
    for(int i=1;i<n;i++){
        sum[i].first=sum[i-1].first-A[i-1]+A[(i+k-1)%n];
        sum[i].second =i;
        //avg+=sum[i];
    }
    sort(sum,sum+n);
    int mid;
    int mid1=0;
    int mid2=0;
    mid1 = sum[n/2].first;
    mid2 = sum[n/2 +1].first;
    int ans1=0;
    int ans2=0;
    for(int i=0;i<n;i++){
        ans1+=mod(mid1-sum[i].first);
        ans2+=mod(mid2-sum[i].second);
    }
    int ans = min(ans1,ans2);
    if(ans==ans1){
        mid = mid1;
    }
    else mid = mid2;
    ans=0;


}
