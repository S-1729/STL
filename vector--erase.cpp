#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={1,2,3,4,5,6,7};
	
	//removes first element
	v.erase(v.begin());
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";             //2 3 4 5 6 7
	cout<<endl;
	
	//removes second element
	v.erase(v.begin()+1);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";             //2 4 5 6 7
	cout<<endl;
	
	
	//removes the elements in range(2,3)
	v.erase(v.begin()+1,v.begin()+3);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";             //2 6 7
	cout<<endl;
}
