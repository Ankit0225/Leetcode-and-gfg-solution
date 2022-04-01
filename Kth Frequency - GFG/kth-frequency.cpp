#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> kthfreq(vector<int> &nums,int n, int k){
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<n;i++)
        mp[nums[i]]++;
        for(auto i : mp)
        if(i.second>k)
        v.push_back(i.first);
        sort(v.begin(),v.end());
        if(v.size()==0)
        v.push_back(-1);
        return v;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(auto & i : nums)
    cin>>i;
    Solution obj;
    vector<int> res = obj.kthfreq(nums,n,k);
    for(auto &i : res)
    cout<< i << " ";
    cout<<"\n";
    }
    return 0;
}

