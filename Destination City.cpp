class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        int i=0;
        int j=1; 
        
        unordered_set <string> m;
        for(int i=0;i<paths.size();i++)
        {
            m.insert(paths[i][0]);
        }
        string ans;
        while(i<paths.size())
        {
            ans= paths[i][1];
            if(m.find(ans)==m.end())
                break;
            i++;     
        }
        cout<<paths.size();
        return ans;
        
    }
};
