class Solution {
public:
    string toLowerCase(string str) {
        
        int len=str.length();
        int i=0;
        while(i<len)
        {
            if( str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]+32;
            }
            i++;
        }
        
        return str;
    }
};
