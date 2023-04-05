#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int arr[]={1,2,3};
	vector<int>v(arr,arr+3);
	
	cout<<"Front element = "<<v.front()<<endl;
	cout<<"Last element = "v.back()<<endl;
}
