class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double temp[nums1.size()+nums2.size()];
        
        for(int i=0;i<nums1.size();i++)
            temp[i]=nums1[i];
        for(int j=0;j<nums2.size();j++)
            temp[nums1.size()+j]=nums2[j];
        
        sort(temp,temp+nums1.size()+nums2.size());
        
        int low=0, high=nums1.size()+nums2.size()-1;
             if((nums1.size()+nums2.size())%2!=0){
            int mid = (low+high)/2;
            return (temp[mid]);
        }
        else{
            int mid = (low + (nums1.size()+nums2.size()))/2;
            return  ((temp[mid]+temp[mid-1])/2);
        }
        
    }
};