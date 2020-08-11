class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack=="" && needle=="")
            return 0;
        if(needle.length()>haystack.length())
            return -1;
        for(int k=0;k<haystack.length()-needle.length()+1;k++)
        {
           int i=k;
           int pos=i;
           int j=0;
           while(needle[j]!='\0' && haystack[i]==needle[j])
           {
             i++;
             j++;
           }
           if(needle[j]=='\0')
             return pos;
        }
        return -1;
    }
};
