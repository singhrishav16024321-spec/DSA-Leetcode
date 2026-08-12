class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n= score.size();
        vector<int> resp;
        vector<string> answer(n);
        
        for(int i=0;i<n;i++){
            resp.push_back(score[i]);
        }
        sort(resp.begin(),resp.end(),greater<int>());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(score[i]==resp[j]){
                    if(j==0){
                        answer[i]="Gold Medal";
                    }
                    else if( j==1){
                        answer[i]="Silver Medal";
                    }
                    else if( j==2){
                        answer[i]="Bronze Medal";
                    }
                    else{
                        answer[i]=to_string(j+1);
                    }
                }
            }
        }
        return answer;
    }
};