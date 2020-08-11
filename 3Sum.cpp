class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> array;
        
        sort(nums.begin(),nums.end());      
        
        int n=nums.size();
       
        map<pair<int,int>,int> m;
        
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
                
            {
                if(nums[j]+nums[k]+nums[i]==0)
                {
                    pair<int,int> p;
                    p.first=nums[j];
                    p.second=nums[k];
                    if(m.count(p)==0)
                    {
                        vector<int> subarray;
                        subarray.push_back(nums[i]);
                        subarray.push_back(nums[j]);
                        subarray.push_back(nums[k]);
                        array.push_back(subarray);
                        m[p]=1;
                    }
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]+nums[i]<0)
                    j++;
                else
                {
                    k--;
                }
            }
            
        }
 
        return array;
    }
};
    
