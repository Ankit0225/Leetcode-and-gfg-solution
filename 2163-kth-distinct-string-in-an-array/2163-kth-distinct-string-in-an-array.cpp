class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;

        for(auto i : arr)
            mp[i]++;

        string ans = "";
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]] == 1)
            {
                ans = arr[i];
                k--;
                if(k == 0)
                    break;
            }
        }
        return k > 0 ? ""  : ans;
    }
};