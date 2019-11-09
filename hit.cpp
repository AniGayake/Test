#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	
	vector<int> s;
	for(int i=0;i<n;i++)
	{
		int marks;
		cin>>marks;
		s.push_back(marks);
	}

	sort(s.begin(),s.end());

	int a = n/4,flag;

	for (int i = a;i<n; i+=a)
	{
		if(s[i]<=s[i-1])
		{
			
			flag = 0;
			break;
		}else{
			flag = 1;
		}

	}
	if(flag)
	{
		int x,y,z;
		x = s[2*a-1];
		y = s[3*a-1];
		z = s[4*a-1];
		cout<<x<<" "<<y<<" "<<z<<"\n";
	}else{
		cout<<"-1\n";
	}
	
	}
}