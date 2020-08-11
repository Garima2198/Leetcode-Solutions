class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
      
       vector<int> knows(N + 1);
       vector<int> isknownby(N + 1);
        
        for(int i = 0; i < trust.size(); i++)
        {
            knows[trust[i][0]]++;
            isknownby[trust[i][1]]++;
        }
        
        for(int i = 1; i <= N; i++)
        {
            if(knows[i] == 0 && isknownby[i]== N-1)
                return i;
        }
        return -1;
    }
};
        
