class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        //count number of occurences for each character
        for(int i=0; i<s.size(); i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        //if occurence numbers do not match, return false
        for(int k=0; k<smap.size(); k++){
            if(smap[k]!=tmap[k])
                return false;
        }
        return true;
    }
};