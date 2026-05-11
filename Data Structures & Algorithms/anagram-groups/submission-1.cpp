class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for(int i = 0; i < strs.size(); i++){
            string str = strs[i];
            string key = str;
            sort(begin(key), end(key));
            anagrams[key].push_back(strs[i]);
        }
        vector<vector<string>> final;
        for (const auto& [key, value] : anagrams){
            final.push_back(value);
        }
        return final;
    }
};
