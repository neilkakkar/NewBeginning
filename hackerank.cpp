#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define sz (int)1e5+5

int A[sz];
int sum[sz];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
double A[10]={95,85,80,70,60};
double B[10] = {85,95,70,65,70};

double ans=0;
double sumA=0;
double sumB=0;
int N=5;
    for(int i=0;i<N;i++){
        ans+=A[i]*B[i];
        sumA+=A[i];
        sumB+=B[i];
    }
    cout<<ans<<" "<<sumA<<" "<<sumB<<endl;
    double sumA2=0;
    double sumB2=0;
    for(int i=0;i<N;i++){
        sumA2+=A[i]*A[i];
        sumB2+=B[i]*B[i];
    }
    cout<<sumA2<<" "<<sumB2<<endl;

    double fina = (N*ans-sumA*sumB)/((N*sumA2-sumA*sumA));
    cout<<fina<<endl;
    double intercept = (sumB - fina*sumA)/N;
    cout<<intercept+80*fina<<endl;
}
