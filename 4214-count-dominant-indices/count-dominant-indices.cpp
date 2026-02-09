class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size(), sum = 0, cnt = 0;
        vector<int> avg_arr(n, 0);
        
        for(int i = n - 1; i >= 0; i--) {
            sum += nums[i];
            avg_arr[i] = sum / (n - i);
        }
        
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > avg_arr[i + 1]) cnt++;
        }
        
        return cnt;
    }
};