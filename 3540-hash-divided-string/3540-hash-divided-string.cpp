class Solution {
public:
    string stringHash(string s, int k) {
        // vector<string> res;
        int val = 0;
        string ans="",res="";
        int n = s.length()/k;
        for(int i=0;i<s.length();i++)
        {
            ans+=s[i];
            if(ans.length() <= k)
            {
                   val += (s[i] - 'a');
                   if(ans.length() == k)
                   {
                        int hash = val % 26;
                        char st = hash + 'a';
                        res += st;
                        val = 0;
                        ans ="";
                   }
            }
        }
        return res;
    }
};