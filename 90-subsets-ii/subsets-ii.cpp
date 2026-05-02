class Solution {
public:

    void solve(int idx,vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums)
    {
        // if(idx >= nums.size())
        // {
        //     ans.push_back(ds);
        //     return;
        // }
    ans.push_back(ds);
        for(int i = idx;i<nums.size();i++)
        {
            if(i != idx && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(i+1,ds,ans,nums);
            ds.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        //unordered_set<int>sett;

        //set<vector<int>>sett;
        int idx = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        solve(idx,ds,ans,nums);

        // for(auto it: ans)
        // {
        //     sett.insert(it);
        // }

        // vector<vector<int>>res;
        // for(auto it: sett)
        // {
        //     res.push_back(it);
        // }

        return ans;


        //return ans;
    }
};