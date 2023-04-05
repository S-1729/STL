#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v={1,2,3};
	
	//using reverse function
	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";               //3 2 1
	cout<<endl;
	
	
	//using rbegin() & rend()
	for(auto i=v.rbegin();i<v.rend();i++)
	cout<<*i<<" ";                 //1 2 3
	cout<<endl;
	
	
	//using reverse_iterator
	vector<int>v1={1,2,3}
	vector<int>::reverse_iterator it1,it2;
	it1=v1.rbegin();
	it2=v1.rend();
	for(;it1!=it2;it1++)          //3 2 1
	cout<<*it1<<" ";
}
