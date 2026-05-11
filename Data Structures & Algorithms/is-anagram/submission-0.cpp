class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s1, s2;
        for (int i = 0; i < s.length(); i++){
            s1[s[i]]++;
        }
        for (int j = 0; j < t.length(); j++){
            s2[t[j]]++;
        }
        if (s1 == s2){
            return true;
        }
        else 
            return false;
    }
};
