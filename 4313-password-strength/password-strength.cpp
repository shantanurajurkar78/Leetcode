class Solution {
public:
    int passwordStrength(string passwords) {

        int count = 0;
        set<char>s;
        vector<char>ans;
        

        for(char ch: passwords)
        {
            s.insert(ch);
        }

        for(auto it: s)
        {
            ans.push_back(it);
        }

        sort(ans.begin(),ans.end());

        for(auto it: ans)
        {
            cout<<it<<"";
        }
        // if(passwords[0]>='a' && passwords[0] <= 'z' ) count = 1;
        // else if(passwords[0]>='A' && passwords[0] <= 'Z' ) count = 2;
        // else  if(passwords[0]>='1' && passwords[0] <= '9' ) count = 3;
        // else{
        //     count =5;
        // }
        for(int i = 0;i<ans.size();i++)
        {
            if(ans[i]>='a' && ans[i] <= 'z' ) count+= 1;
            else if(ans[i]>='A' && ans[i] <= 'Z' ) count+= 2;
            else if(ans[i]>='0' && ans[i] <= '9' ) count+= 3;
            else{
                count+= 5;
            }
            
            // if(passwords[i]>='a' && passwords[i] <= 'z' ){
            //     if(passwords[i]!=passwords[i-1]) count+= 1;
            //     continue;
            // } 

            // else if(passwords[i]>='A' && passwords[i] <= 'Z' )
            // {
            //     if(passwords[i]!=passwords[i-1]) count+= 2;
            //     continue;
            // } 

            // else if(passwords[i]>='1' && passwords[i] <= '9'){
            //     if(passwords[i]!=passwords[i-1]) count+= 3;
            //     continue;
            // } 

            // else{
            //     count+= 5;
            // }
            
        }

        return count;
    }
};