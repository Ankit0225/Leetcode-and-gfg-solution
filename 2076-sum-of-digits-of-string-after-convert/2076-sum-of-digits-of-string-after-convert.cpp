class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for(int i=0;i<s.length();i++)
        {
            char ch = s[i]-'a' + 1;
            num += to_string(ch);
        }

        int ans = 0;
        while(k--)
        {
            int sum = 0;
            for(int i=0;i<num.length();i++)
            {
                sum += num[i] -'0';
            }
            ans = sum;
            num = to_string(sum);
        }
        return ans;
    }
};