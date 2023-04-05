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
	
	//pops  element at the end
	v1.pop_back();
	
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";    //1 2
	
}
