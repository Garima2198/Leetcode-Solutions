class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> result;
        for(int i=1;i<=n;i++)
        {
            string ans="";
            if(i%3==0)
                ans=ans.append("Fizz");
            if(i%5==0)
                ans=ans.append("Buzz");
            if(ans=="")
                ans=ans.append(to_string(i));
            result.push_back(ans);
            
        }
        
        return result;   
    }
};
