class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {

        map<int,int>m;
        for(int num : nums)
        {
            m[num]++;
        }

        for(int num: nums)
        {
            if(num % 2 == 0 && m[num] == 1)
            return num;
        }
        return -1;
        
    }
};