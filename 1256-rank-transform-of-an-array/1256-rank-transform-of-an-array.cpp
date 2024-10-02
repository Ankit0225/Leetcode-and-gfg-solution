class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>> minH;
        for(auto i : arr)
            minH.push(i);
        
        unordered_map<int,int> mp;
        int cnt = 1;
        while(!minH.empty())
        {
            int val = minH.top();
            minH.pop();
            if(mp.find(val)==mp.end())
            {
                mp[val]=cnt;
                cnt++;
            }
        }

        vector<int> ans;

        for(auto i : arr)
            if(mp.find(i)!=mp.end())
                ans.push_back(mp[i]);
        return ans;
    }
};