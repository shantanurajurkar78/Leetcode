class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i = 0; i<n;i++)
        {
            if(nums[i]%2 != 0)
            {
                int cnt = 0;
                for(int j = i+1;j<n;j++)
                {
                    //int cnt = 0;
                    if(nums[j]%2 == 0)
                    {
                        cnt++;
                    }
                }
                    ans.push_back(cnt);
            }
            else{
                    int cnt1 = 0;
                for(int j = i+1;j<n;j++)
                {
                    if(nums[j]%2 != 0)
                    {
                        cnt1++;
                    }
                }
                    ans.push_back(cnt1);
            }
        }

        return ans;
    }
};