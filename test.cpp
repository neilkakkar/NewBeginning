#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;

        int three = 0;
        int five = 0;
        for(int i=n/3 + 5;i>=0;i--){
            if(n-3*i>=0 && (n-3*i)%5==0){
                five=i;
                three = (n-3*i)/5;
                break;
            }
        }
        if(three==0 && five==0){
            cout<<"-1\n";
        }
        else{
                cout<<five<<" "<<three;
            while(five--)cout<<"555";
            while(three--)cout<<"33333";
            cout<<endl;
        }
    }
    return 0;
}
