class Solution {
public:

    void solve(int idx,vector<int>&nums,vector<vector<int>>&ans)
    {
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = idx;i<nums.size();i++)
        {
            swap(nums[i],nums[idx]);
            solve(idx+1,nums,ans);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        solve(0,nums,ans);

        sort(ans.begin(),ans.end());
        set<vector<int>>sett;

        for(auto it: ans)
        {
            sett.insert(it);
        }

        vector<vector<int>>res;

        for(auto it: sett)
        {
            res.push_back(it);
        }

        return res;
    }
};