//Leetcode Problem No. 14
//Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())    return " ";

        // Start by assuming the first string is the entire common prefix
        string prefix = strs[0];

        // While the current string DOES NOT start with the prefix
        // (find() returns 0 if it starts at the very beginning)
        for(int i=1;i<strs.size();i++){

            while (strs[i].find(prefix) != 0){
                // Chop the last character off the prefix
                prefix = prefix.substr(0,prefix.length()-1);

                // If we chopped everything off, there is no common prefix at all
                if (prefix.empty()) return "";
            }

        }
        return prefix;
        
    }
};