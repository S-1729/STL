#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v;
	cout<<v.empty();   //1
	
	v.push_back(10);
	cout<<v.empty();   //0
	
}
