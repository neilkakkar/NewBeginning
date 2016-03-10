#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define sz (int)1e8+5

bool prime[sz];
vector<int>primes;
void SieveOfEratosthenes(int n)
{
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          primes.push_back(p);//cout << p << " ";
}
int gcd(int a,int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}
int isprime(int p){
    if(p<sz)return prime[p];
    //if(p==2)return 1;
    //if(p%2==0)return 0;
    for(int i=primes[primes.size()-1];i*i<p;i+=2){
        if(p%i==0)return 0;
    }
    return 1;
}
int k;
int sDiv(int a){
    if(a%2==0)return 2;
    for(int i=0;i<primes.size();i++){
        if(primes[i]>a)return a;
        if(a%primes[i]==0)return primes[i];
    }
    /*for(int i=3;i*i<=a,i<=k;i++){
        if(a%i==0)return i;
    }*/
    return 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //cout<<gcd(2,1);
    for(int i=0;i<sz;i++)prime[i]=1;
    ios_base::sync_with_stdio(0);
    SieveOfEratosthenes(sz-1);

    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b>>k;
        int ans=0;
        int t=1;
        if(!isprime(k)){
            ans=0;
        }
        else if(k==2){
            ans=b/k - (a-1)/k;
        }
        else{
        if(a%k!=0){
            a+=(k-a%k);
        }
        for(int i=a;i<=b;i+=t*k){
            if(sDiv(i)==k){
                ans++;
                if(t==1)t=2;
            }
        }
        }
        cout<<ans<<endl;

    }
    return 0;
}
