class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx=s.find_last_not_of(' ')+1;
        s.erase(idx);
        int last_space_idx=s.find_last_of(' ');
        return last_space_idx==string::npos?s.size():s.size()-last_space_idx-1;
    }
};

/*
	Given a string s consisting of words and spaces, return the length of the last word in the string.
	A word is a maximal substring consisting of non-space characters only.

	Example 1:
	Input: s = "Hello World"
	Output: 5
	Explanation: The last word is "World" with length 5.
	
	Example 2:
	Input: s = "   fly me   to   the moon  "
	Output: 4
	Explanation: The last word is "moon" with length 4.
	
	Example 3:
	Input: s = "luffy is still joyboy"
	Output: 6
	Explanation: The last word is "joyboy" with length 6.

	T.C : O(n)
*/
