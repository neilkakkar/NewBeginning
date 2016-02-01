#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin>>N;
	long long int sum=0;
	vector<int> A;
	for(int i=0;i<N;i++)
	{
		int x;
		cin>>x;
		if(x%2==0)
		{
		sum+=x;
		}
		else
		{
			A.push_back(x);
		}
	}
	sort(A.begin(),A.end());
	if(A.size()%2==0)
	{
		for(int i=0;i<A.size();i++)
		{
		sum+=A[i];
		}
	}
	else
	{
		for(int i=1;i<A.size();i++)
		{
		sum+=A[i];
		}
	}
	cout<<sum<<endl;
}
