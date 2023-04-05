#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	//using size function
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";            //1 2 3
	cout<<endl;
	
	//using iterator
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	cout<<*it<<" ";             //1 2 3
	cout<<endl;
	
	//using auto
	for(auto e:v)
	cout<<e<<" ";               //1 2 3
	cout<<endl;	
	
	for(auto& e:v)
	cout<<e<<" ";               //1 2 3
	cout<<endl;	
	
	//using begin() & end()
	for(auto i=begin(v);i!=end(v);i++)
	cout<<*i<<" ";             //1 2 3
	cout<<endl;
	
	//using at 
	for(int i=0;i<v.size();i++)
	cout<<v.at(i)<<" ";        //1 2 3
	cout<<endl;
}
