#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		int n,k;
		cin>>n>>k;
		int a[n];int sum =0;

		for (int i = 0; i <n; i++)
		{
			cin>>a[i];
		}

		
			for (int j = 0; j < n;j++)
			{
				sum+=a[j];
			}


		for (int i = 0; i <n; i++)
		{
			if(a[i]+k>(sum-a[i]))
				count++;
		}
		
		cout<<count<<endl;
	}
}