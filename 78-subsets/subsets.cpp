class Solution {
    private:
    void solve(vector<int>nums,vector<int>ds, int idx, vector<vector<int>>&ans ){
        if(idx>=nums.size()){
            ans.push_back(ds);
            return;
        }

            solve(nums ,ds, idx+1, ans);

            //int element=nums[index];
            ds.push_back(nums[idx]);
            solve(nums ,ds, idx+1, ans);

        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int idx=0;
        solve (nums, ds, idx, ans);
        return ans;
        
    }
};