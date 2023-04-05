#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v={1,2,5,3,4};
	
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";               //1 2 3 4 5
	cout<<endl;
	
	
	vector<int>v1={1,2,5,3,4};
	
	sort(v1.rbegin(),v1.rend());
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";             //5 4 3 2 1
	cout<<endl;
}
