class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for(int i=0; i<strs.size(); i++){
            string key = numLetters(strs[i]);
            hash[key].push_back(strs[i]);
        }
        
        vector<vector<string>> result;
        for(auto j=hash.begin(); j!=hash.end();j++){
            result.push_back(j->second);
        }
        return result;
    }
private:
    string numLetters(string str){
        vector<int> count(26,0);
        for(int i=0;i<str.size();i++){
            count[str[i]-'a']++;
        }
        
        string key = "";
        for(int j=0;j<count.size();j++){
            key.append(to_string(count[j])+'_');
        }
        return key;
    }
};