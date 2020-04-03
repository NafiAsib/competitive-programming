int findMin(int* nums, int numsSize){
    int left = 0, right = numsSize-1, mid;
    int ans;
    while(left <= right) {
        mid = left + (right-left)/2;
        
        if(nums[mid] <= nums[left]) {
            ans = fmin(ans,nums[mid]);
        }
        
        if(nums[mid] <= nums[right]) right = mid-1;
        else if(nums[mid] > nums[right]) left = mid+1;
    }
    return ans;
}

