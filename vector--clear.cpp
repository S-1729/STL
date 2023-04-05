#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={1,2,3};
	for(int i=0;i<3;i++)
	cout<<v[i]<<" ";         //1 2 3
	cout<<endl;
	
	v.clear();
	v.push_back(10);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";        //10
	cout<<endl;
	
	for(int i=0;i<3;i++)
	cout<<v[i]<<" ";        //10 2 3
	cout<<endl;
}
