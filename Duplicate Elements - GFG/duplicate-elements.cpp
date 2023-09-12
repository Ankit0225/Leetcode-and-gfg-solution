//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    void SortedDuplicates(int n, vector<int> &arr) {
        // code here
        unordered_map<int,int> mp;
        bool flag = false;
        
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        
        for(auto i : mp)
        minH.push({i.first,i.second});
        
        while(minH.empty() == false)
        {
            int num = minH.top().first;
            int freq = minH.top().second;
            minH.pop();
            
            if(freq > 1)
            {
                flag = true;
                cout<<num<<" ";  
            }
        }
        if(flag == false)
        cout<<-1<<" ";
        cout<<endl;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        
        obj.SortedDuplicates(n, arr);
        
    }
}

// } Driver Code Ends