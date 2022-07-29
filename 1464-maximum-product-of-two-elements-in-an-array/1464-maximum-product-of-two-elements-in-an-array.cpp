class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int> maxH;
        for(int i=0;i<n;i++)
            maxH.push(nums[i]);
        
        int get1=maxH.top();
        maxH.pop();
        int get2=maxH.top();
        return (get1-1)*(get2-1);
    }
};