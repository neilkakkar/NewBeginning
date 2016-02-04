#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	// your code here
	int N;
	cin>>N;
	int ans=N;
	for(int i=2;i*i<=N;i++)
	{
		if(N%(i*i)==0)
		{
			ans+=1;
		}
		else if(N%i==0)
		{
			ans+=2;
		}
	}
	cout<<ans;

	return 0;
}
