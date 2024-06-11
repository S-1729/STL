class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(auto x:arr1)
            mp[x]++;
        int i=0;
        for(auto x:arr2){
            if(mp.find(x)!=mp.end()){
                int n=mp[x];
                for(int k=0;k<n;k++)
                    arr1[i++]=x;
                mp.erase(x);
            }
        }
        int start=i;
        for(auto it:mp){
            int n=it.second;
            for(int k=0;k<n;k++)
                arr1[i++]=it.first;
        }
        sort(begin(arr1)+start,end(arr1));
        return arr1;
    }
};

/*
    Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.
    Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. 
    Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.

    Example 1:
    Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
    Output: [2,2,2,1,4,3,3,9,6,7,19]

    Example 2:
    Input: arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
    Output: [22,28,8,6,17,44]

    T.C : O(nlogn)
    S.C : O(n)
*/