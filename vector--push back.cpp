#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";    //1 2 3
	cout<<endl;
	
	
	int n,x;
	vector<int>v2;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v2.push_back(x);
	}
	
	for(int i=0;i<n;i++)
	cout<<v2[i]<<" ";    
	
}
