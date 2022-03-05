class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res=-1;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        for(auto i: mp){
            if(i.first==i.second)
            res=max(res,i.first);
        }
            
        return res;
    }
};