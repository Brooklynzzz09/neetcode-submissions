class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count1, count2;
        for (int i = 0; i < s.size();i++){
            count1[s[i]]++;
        }
        for (int j = 0; j < t.size(); j++){
            count2[t[j]]++;
        }
        if(count1 == count2){
            return true;
        }
        else 
            return false;
    }
};
