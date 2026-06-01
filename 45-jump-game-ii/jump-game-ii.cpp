class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0;
        int r = 0;
        int jump = 0;
        while(r<nums.size() - 1)
        {
            int farthest = 0;
            for(int idx = l; idx<=r;idx++)
            {
                farthest = max(idx + nums[idx], farthest);
            }
            l= r+1;
            r = farthest;
            jump = jump+1;
        }

        return jump;
    }
};