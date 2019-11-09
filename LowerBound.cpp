#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int N,Q;
	vector <int> v;
	cin>>N;
	for(int i=0;i<N;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	cin>>Q;
	
	for(int j=0;j<Q;j++){
		int q;
		cin>>q;
		vector<int> ::iterator low;
		if(binary_search(v.begin(),v.end(),q))
		cout<<"Yes ";
		else
		cout<<"No ";
		
		low = lower_bound(v.begin(),v.end(),q);
		cout<<(low-v.begin()+1)<<endl;
	}
}
