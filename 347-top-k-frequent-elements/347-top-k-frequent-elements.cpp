class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>> maxH;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        for(auto i : mp)
        {
            maxH.push({i.second,i.first});
        }
         vector<int> v;
        if(maxH.top().first<k && v.size()==0)
        {
         for(int i=0;i<k;i++)
         {
             v.push_back(maxH.top().second);
             maxH.pop();
         }
        }
        else
        {
         for(int i=0;i<k;i++)
         {
             v.push_back(maxH.top().second);
             maxH.pop();   
         }
        }
        // reverse(v.begin(),v.end());
        
        return v;
        
        
    }
};