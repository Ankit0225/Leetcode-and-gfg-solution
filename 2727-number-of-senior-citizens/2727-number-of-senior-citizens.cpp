class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size(),cnt  = 0;
        for(int i=0;i<n;i++)
        {
            string s = details[i];
            int num = (s[11] - '0') * 10 +(  s[12]-'0');
            if(num>60)
                cnt++;
        }
        return cnt;
    }
};