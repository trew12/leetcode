/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = strs[0];
        for (size_t i = 1; i< strs.size(); i++){
            for (size_t j = 0; j < pref.size(); j++){
                if (strs[i][j] != pref[j]){
                    pref.erase(pref.begin() + j, pref.end());
                }
                if (pref == ""){
                    break;
                }
            }    
        }
        return pref;
    }
};
