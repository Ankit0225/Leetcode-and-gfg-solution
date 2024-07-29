class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        if(n == 0)
            return 0;
        
        vector<int> increasingDP(n,0),decreasingDP(n,0);
        int teams =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(rating[i] > rating[j])
                {
                    increasingDP[i]++;
                    teams += increasingDP[j];
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(rating[i] < rating[j])
                {
                    decreasingDP[i]++;
                    teams += decreasingDP[j];
                }
            }
        }
        return teams;
    }   
};