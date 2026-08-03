class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        if(1LL*m*k>n){return -1;} 
        int mini=INT_MAX; int maxi=INT_MIN; 
        for(int i=0; i<n;i++){
            mini= min(mini,bloomDay[i]);
            maxi= max( maxi,bloomDay[i]);
        }
        int low=mini; int high=maxi; int ans= high;
        while(low<=high){
            int mid= (low+high)/2;
            if(possible(bloomDay,m,k,mid)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

        
    }
    bool possible(vector<int> bloomDay, int m, int k, int day ){
          int ctr=0; 
          int nob=0;
          for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                ctr++;
            }
            else{
                nob+=(ctr/k);
                ctr=0;
            }
          }
          nob+= (ctr/k);
          if(nob>=m){return true ;}
          else {return false;}  
    }
};