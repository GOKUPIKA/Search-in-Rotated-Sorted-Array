#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int n=nums.size();
    int mid=0;
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        mid=low+(high-low)/2;
        
        if(nums[mid]==target){
            ans=mid;
            return mid;
        }
        else if(nums[mid]>target){
            if(nums[low]<=nums[mid] && nums[low]>target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else{
            if(target>nums[high] && nums[mid]<=nums[high]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return ans;
}