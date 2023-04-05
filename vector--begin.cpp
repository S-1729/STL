#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int arr[]={1,2,3};
	vector<int>v(arr,arr+3);
	
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;
	
	vector<int>v1(v);
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";
	cout<<endl;
	
	vector<int>v2;
	v2=v1;
	for(int i=0;i<v2.size();i++)
	cout<<v2[i]<<" ";
}
