class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> minH;
    int size = 0;
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(auto i : nums)
        {
            minH.push(i);
            if(minH.size()>k)
                minH.pop();
        }
    }
    
    int add(int val) {
        minH.push(val);
        if (size < minH.size())  minH.pop();
        return minH.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */