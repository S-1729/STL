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
	cout<<endl;
	
	//using assign
	vector<int>v3;
	v3.assign(3,100);
	for(int i=0;i<v3.size();i++)
	cout<<v3[i]<<" ";
	cout<<endl;
	
	vector<int>v4;
	v4.assign(v3.begin(),v3.end());
	for(int i=0;i<v4.size();i++)
	cout<<v4[i]<<" ";
}
