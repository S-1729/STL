#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v1={1,2,3};
	vector<int>v2={10,20};
	
	//method-1
	swap(v1,v2);
	
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";              //10 20
	cout<<endl;
	
	for(int i=0;i<v2.size();i++)
	cout<<v2[i]<<" ";              //1 2 3
	cout<<endl;
	
	//method-2
	v1.swap(v2);
	
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";              //1 2 3
	cout<<endl;
	
	for(int i=0;i<v2.size();i++)
	cout<<v2[i]<<" ";             //10 20
	cout<<endl;
}
