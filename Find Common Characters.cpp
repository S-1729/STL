class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<int>arr(26,0);
        for(auto &ch:words[0])
            arr[ch-'a']++;
        for(int i=1;i<n;i++){
            for(char ch='a';ch<='z';ch++){
                int c=count(begin(words[i]),end(words[i]),ch);
                arr[ch-'a']=min(arr[ch-'a'],c);
            }
        }
        vector<string>ans;
        for(int i=0;i<26;i++){
            int c=arr[i];
            string ch(1,i+'a');
            while(c--)
                ans.push_back(ch);
        }
        return ans;
    }
};

/*
    Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.
    
    Example 1:
    Input: words = ["bella","label","roller"]
    Output: ["e","l","l"]
    
    Example 2:    
    Input: words = ["cool","lock","cook"]
    Output: ["c","o"]

    T.C : O(n)
*/
