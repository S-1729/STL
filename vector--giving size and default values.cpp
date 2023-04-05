#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v(3);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";            //0 0 0
	cout<<endl;
	
	vector<int>v1(3,10);
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";          //10 10 10
	cout<<endl;
	
}
