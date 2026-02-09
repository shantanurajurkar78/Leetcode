class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {

        stack<long long>st;
        vector<long long>ans;
        int n = nums.size();
        long long sum =0;
        for(int i = 0; i<n; i++)
        {
            sum = nums[i];

            while(!st.empty() &&  st.top()==sum)
            {
                sum+=st.top();
                st.pop();
            }

            st.push(sum);            
        }

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;


        
    }
};