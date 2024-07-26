class Solution {
  public:
    bool kPangram(string str, int k) {
        int c=0;
        unordered_set<char>S;
        for(auto &ch:str){
            if(ch>='a' && ch<='z'){
                S.insert(ch);
                c++;
            }
        }
        if(c>=26 && (26-S.size())<=k)
            return true;
        return false;
    }
};

/*
    Given a string str and an integer k, return true if the string can be changed into a pangram after at most k operations, else return false.
    A single operation consists of swapping an existing alphabetic character with any other alphabetic character.
    Note - A pangram is a sentence containing every letter in the english alphabet.
    
    Examples :
    
    Input: str = "the quick brown fox jumps over the lazy dog", k = 0
    Output: true
    Explanation: the sentence contains all 26 characters and is already a pangram.
    
    Input: str = "aaaaaaaaaaaaaaaaaaaaaaaaaa", k = 25 
    Output: true
    Explanation: The word contains 26 instances of 'a'. Since only 25 operations are allowed. We can keep 1 instance and change all others to make str a pangram.
    
    Input: str = "a b c d e f g h i j k l m", k = 20
    Output: false
    Explaanation: Since there are only 25 charaacters only in this case, so no amount of swapping we can have panagram here.
    
    T.C : O(n)
*/
