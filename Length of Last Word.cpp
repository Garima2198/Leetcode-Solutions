class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.size();
        if(n==0)
            return 0;
        int count=0;
        int i=n-1;
        while(s[i]==' ')
        {
            i--;
        }
        for(;s[i]!=' ' && s[i]!='\0';i--)
        {
            count++;
        }
        return count;
        
    }
};
