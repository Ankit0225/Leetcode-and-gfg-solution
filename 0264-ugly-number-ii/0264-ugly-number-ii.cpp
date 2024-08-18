#define ll long long
class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<ll,vector<ll>,greater<ll>> minH;
        minH.push(1);
        vector<int> factors = {2,3,5};
        unordered_set<ll> s;
        for(int i=0;i<n;i++)
        {
            ll val = minH.top();
            minH.pop();
            if(i == n-1)
                return val;
            for(int k=0;k<3;k++)
            {
                if(s.find(val * factors[k]) == s.end())
                {
                    s.insert(val * factors[k]);
                    minH.push(val * factors[k]);
                }
            }
        }
        return 0;
    }
};