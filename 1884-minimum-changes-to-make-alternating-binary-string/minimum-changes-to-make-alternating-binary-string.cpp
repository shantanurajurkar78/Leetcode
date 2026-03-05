class Solution {
public:
    int minOperations(string s) {

        int n = s.length();
        int cnt0 = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i]-'0' != i%2)
            {
                cnt0++;
            }
        }
        int cnt1 = n- cnt0;

        return min(cnt1,cnt0);
        
    }
};