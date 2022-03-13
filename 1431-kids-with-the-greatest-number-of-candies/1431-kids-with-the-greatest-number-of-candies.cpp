class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int res=0;
        for(int i=0;i<candies.size();i++)
            res=max(res,candies[i]);
        for(int i=0;i<candies.size();i++)
            if(candies[i]+extraCandies>=res)
                v.push_back(true);
                else
                    v.push_back(false);
        return v;
    }
};