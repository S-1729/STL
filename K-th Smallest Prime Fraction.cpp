class Solution {
public:
    typedef pair<double,pair<int,int>>P;
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<P,vector<P>,greater<P>>pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            double x=arr[i];
            for(int j=i+1;j<n;j++){
                double y=arr[j];
                double res=x/y;
                pq.push({res,{arr[i],arr[j]}});
            }
        }
        while(--k)
            pq.pop();
        return {pq.top().second.first,pq.top().second.second};
    }
};

/*
    You are given a sorted integer array arr containing 1 and prime numbers, where all the integers of arr are unique. You are also given an integer k.
    For every i and j where 0 <= i < j < arr.length, we consider the fraction arr[i] / arr[j].
    Return the kth smallest fraction considered. Return your answer as an array of integers of size 2, where answer[0] == arr[i] and answer[1] == arr[j].

    Example 1:
    Input: arr = [1,2,3,5], k = 3
    Output: [2,5]
    Explanation: The fractions to be considered in sorted order are:
    1/5, 1/3, 2/5, 1/2, 3/5, and 2/3.
    The third fraction is 2/5.

    Example 2:
    Input: arr = [1,7], k = 1
    Output: [1,7]

    T.C : O(n*n)
    S.C : O(n)
*/
