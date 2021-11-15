class Solution {
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        int left =0 , right = nums.size()-1;
        
        while(left<=right){
            
            int mid = (left+right+1)/2;  //
            if(nums[mid]==target)
                return mid;
            else{
                if(nums[mid] < target)//中間比較小 代表在右邊
                    left = mid + 1;
                else if(nums[mid] > target)
                    right = mid -1;
            }
        }
        
        return -1;
    }
};
