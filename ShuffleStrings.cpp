class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        unordered_map<int, char> mp;

        for(int i = 0; i < indices.size(); i++) 
            mp[indices[i]] = s[i];

        string result;

        for(int i = 0; i < indices.size(); i++) 
            result += mp[i];
        
        return result;

    }
};