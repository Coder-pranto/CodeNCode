class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (auto &str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagramGroups[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (auto &word : anagramGroups) {
            result.push_back(word.second);
        }

        return result;
    }
};
