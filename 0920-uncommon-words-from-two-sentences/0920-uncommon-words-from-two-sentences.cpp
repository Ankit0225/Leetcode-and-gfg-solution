class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        string s="";
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i] == ' ')
            {
                mp[s]++;
                s="";
            }
            else
                s+=s1[i];
        }
        mp[s]++;
        s="";
        for(int i=0;i<s2.length();i++)
        {
            if(s2[i] == ' ')
            {
                mp[s]++;
                s="";
            }
            else
                s+=s2[i];
        }
        mp[s]++;
        s="";

        vector<string> ans;
        for(auto i : mp)
            if(i.second == 1)
                ans.push_back(i.first);
        
        return ans;
    }   

};