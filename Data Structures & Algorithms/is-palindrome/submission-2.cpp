class Solution {
public:
    bool isPalindrome(string s) {
        string space = "";
        for (int i = 0; i < s.length(); i++){
            if (isalnum(s[i])){
                space += tolower(s[i]);
            }
        }
        return space == string(space.rbegin(), space.rend());
    }
};
