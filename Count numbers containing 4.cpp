class Solution {
  public:
    int countNumberswith4(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            if(to_string(i).find('4')!=string::npos)
            ans++;
        }
        return ans;
    }
};

/*
    You are given a number n, Return the count of total numbers from 1 to n containing 4 as a digit.
    
    Examples:
    
    Input: n = 9
    Output: 1
    Explanation: 4 is the only number between 1 to 9 which contains 4 as a digit.
    
    Input: n = 44
    Output: 9
    Explanation: 4, 14, 24, 34, 40, 41, 42, 43 & 44, there are total 9 numbers containing 4 as a digit.
    
    T.C : O(n)
*/
