#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
	map<int,string> m;
	m[1]= "Math";
	m[2]= "Science";
	m[3]= "History";
	m[4]= "Geography";
	m[5]= "Economics";
	m[6]= "Biology";
	m[7]= "Calculus";
	m[8]= "Machanics";
	m[9]= "DSF";
	m[10]= "OOP";
	
	m.insert(pair<int,string>(11,"CN"));
	
	m.erase(m.find(1),m.find(3));
	
	for(auto it = m.begin();it!=m.end();it++)
	{
	cout<<"\t"<<it->first<<"\t";
	cout<<it->second<<endl;
	}
	auto itr = m.find(6);
	cout<<itr->second<<endl;
	
}
