class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i : target)
            mp[i]++;

        for(int i=0;i<arr.size();i++)
        {
            if(mp.find(arr[i])!= mp.end())
            {
                mp[arr[i]]--;
                if(mp[arr[i]] == 0)
                    mp.erase(arr[i]);
            }
            else if(mp.find(arr[i]) == mp.end())
                return false;
        }
        
        return true;
    }
};