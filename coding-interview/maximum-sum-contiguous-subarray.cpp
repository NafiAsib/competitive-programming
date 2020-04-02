// O(n) using cumulative sum technique
int maxSubArray(int* nums, int numsSize){
    int n = numsSize;
    if(n == 0) return 0;
    int s[n];
    s[0] = nums[0];
    
    for(int i=1; i<n; i++) s[i] = s[i-1] + nums[i];
    
    int maxsum = s[0];
    int lowestsum = 0;
    
    for(int i=1; i<n; i++) {
        //maxsum = fmax(maxsum, s[i]-lowestsum);
        //if(s[i]-lowestsum > maxsum) maxsum = s[i] - lowestsum;
        lowestsum = fmin(lowestsum, s[i-1]);
        maxsum = fmax(maxsum, s[i]-lowestsum);
    }
    
    return maxsum;
}

