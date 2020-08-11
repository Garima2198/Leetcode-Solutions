class Solution {
public:
    void swap(int*a, int*b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    
    void sortColors(vector<int>& nums) {
        
        int size=nums.size();
        int i=0;
        int nz=0;
        int nt=size-1;
        
        while(i<=nt)
        {
            if(nums[i]==0)
            {
                swap(&nums[i], &nums[nz]);
                i++;
                nz++;
            }
            else if(nums[i]==2)
            {
                swap(&nums[i], &nums[nt]);
                nt--;
            }
            else
                i++;
        }
        
    }
};
