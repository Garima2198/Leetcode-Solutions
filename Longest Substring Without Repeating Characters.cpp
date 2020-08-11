class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)
            return 0;
        int max=-1;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int j=i;
            int count=0;
          
            while(m.count(s[j])==0 && j!=n)
            {
                count++;
                m[s[j]]=1;
                j++;
            }
            
            if(count>max)
                max=count;
            m.clear();
        }
        return max;
    }
};
