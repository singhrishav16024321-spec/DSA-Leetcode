class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq;
        int n= word.length();
        int count=1;
        if(n==1){ return 1;}
        sort(word.begin(),word.end());
        for(int i=1;i<n;i++){
            if(word[i]==word[i-1]){
                count++;
            }
            else{
                freq.push_back(count);
                count=1;
            }
        }
        freq.push_back(count);
        int pushes=0;
        sort(freq.begin(),freq.end(),greater<int>());
        for(int i=0;i<freq.size();i++){
            if(i<8){
                pushes+= freq[i];
            }
            else if(i>=8&&i<16){
                pushes+= 2*freq[i];
            }
            else if(i>=16&&i<24){
                pushes+=3*freq[i];
            }
            else{
                pushes+=4*freq[i];
            }
        }
        return pushes;
    }
};