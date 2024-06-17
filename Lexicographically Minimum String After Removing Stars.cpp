class Solution {
public:
    typedef pair<char,int>P;
    struct comp{
        bool operator()(P &p1,P &p2){
            if(p1.first==p2.first)
                return p1.second<p2.second;
            return p1.first>p2.first;
        }
    };
    string clearStars(string s) {
        int n=s.size();
        priority_queue<P,vector<P>,comp>pq;
        for(int i=0;i<n;i++){
            if(s[i]!='*')
                pq.push({s[i],i});
            else{
                int ind=pq.top().second;
                pq.pop();
                s[ind]='*';
            }
        }
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]!='*')
                ans.push_back(s[i]);
        }
        return ans;
    }
};

/*
    You are given a string s. It may contain any number of '*' characters. Your task is to remove all '*' characters.
    While there is a '*', do the following operation:
       .Delete the leftmost '*' and the smallest non-'*' character to its left. If there are several smallest characters, you can delete any of them.
    Return the lexicographically smallest resulting string after removing all '*' characters.

    Example 1:
    Input: s = "aaba*"
    Output: "aab"
    Explanation:
    We should delete one of the 'a' characters with '*'. If we choose s[3], s becomes the lexicographically smallest.
 
    Example 2:
    Input: s = "abc"
    Output: "abc"
    Explanation:
    There is no '*' in the string.

    T.C : O(nlogn)
    S.C : O(n)
*/
