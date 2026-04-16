#include <bits/stdc++.h>
using namespace std;

// LeetCode 13. Roman to Integer
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp ={ {'I',1},
                                        {'V',5},
                                        {'X',10},
                                        {'L',50},
                                        {'C',100},
                                        {'D',500},
                                        {'M',1000}
                                    };
    int result=0;
    for(int i=0;i<s.length();i++){

        if(mp[s[i]]<mp[s[i+1]]){
            result +=mp[s[i+1]] - mp[s[i]];
            i++;
        }else{
            
        result += mp[s[i]];
        }
    }
    return result;
        
    }
};

int main(){
    Solution s;
    string s1 = "III";
    cout << s.romanToInt(s1) << endl;
    string s2 = "LVIII";
    cout << s.romanToInt(s2) << endl;
    string s3 = "MCMXCIV";
    cout << s.romanToInt(s3) << endl;
    return 0;
}
