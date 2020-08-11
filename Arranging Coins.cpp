class Solution {
public:
    int arrangeCoins(int n) {

        int i=0;
        long long int sum=0;
        
        while(sum<=n)
        {
            i++;
            sum=sum+i;
            
        }
        
        return i-1;
        
    }
};
