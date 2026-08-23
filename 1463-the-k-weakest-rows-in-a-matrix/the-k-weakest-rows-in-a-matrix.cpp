class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ns;
        vector<pair<int,int>> res;
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            ns.push_back(count);
        }
        for(int i=0;i<ns.size();i++){
            res.push_back({ns[i],i});
        }
        sort(res.begin(),res.end());
        for(int i=0;i<k;i++){
                ans.push_back(res[i].second);
                
            
        }
        return ans;
    }
};