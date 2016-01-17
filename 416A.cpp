#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

#define sz 1000005
using namespace std;

int A[sz];
int main(){
    int T;
    long long int score=0;
    long long int sum=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    score+=sum;
    sort(A,A+T);
    for(int i=0;i<T-1;i++)
    {
        score+=sum;
        sum = sum - A[i];
    }
    printf("%I64d\n",score);

}

