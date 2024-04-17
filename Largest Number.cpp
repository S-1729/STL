class Solution {
public:
    static bool myComparator(int &a,int &b){
        string num1=to_string(a);
        string num2=to_string(b);
        return (num1+num2)>(num2+num1);
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),myComparator);
        string ans="";
        for(auto ele:nums)
            ans+=to_string(ele);
        return ans[0]=='0'?"0":ans;
    }
};


//Code-2
bool myComparator(int &a,int &b){
    string num1=to_string(a);
    string num2=to_string(b);
    return (num1+num2)>(num2+num1);
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),myComparator);
        string ans="";
        for(auto ele:nums)
            ans+=to_string(ele);
        return ans[0]=='0'?"0":ans;
    }
};

/*
	Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
	Since the result may be very large, so you need to return a string instead of an integer.
	
	Example 1:
	Input: nums = [10,2]
	Output: "210"
	
	Example 2:
	Input: nums = [3,30,34,5,9]
	Output: "9534330"
	
	T.C : O(n*logn)
*/
