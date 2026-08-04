class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h = nums.size()-1;
        int l=0;
        while(l<=h){

         int kash = (l+h)/2;
         if(nums[kash]==target){
            return kash;
         }else if(nums[kash]>target){
            h = kash-1;
         }else{
            l = kash+1;
         }
        }
        return -1;
    }
};
