#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        ordered_set S;
        vector<int>ans(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            ans[i]=S.order_of_key(arr[i]);
            S.insert(arr[i]);
        }
        return ans;
    }
};

/*
    Given an array arr containing non-negative integers. Count and return an array ans where ans[i] denotes the number of smaller elements on right side of arr[i].
    
    Examples:
    
    Input: arr[] = [12, 1, 2, 3, 0, 11, 4]
    Output: [6, 1, 1, 1, 0, 1, 0]
    Explanation: There are 6 smaller elements right after 12. There is 1 smaller element right after 1. And so on.
    
    Input: arr[] = [1, 2, 3, 4, 5]
    Output: [0, 0, 0, 0, 0]
    Explanation: There are 0 smaller elements right after 1. There are 0 smaller elements right after 2. And so on.

T.C : O(nlogn)
*/
