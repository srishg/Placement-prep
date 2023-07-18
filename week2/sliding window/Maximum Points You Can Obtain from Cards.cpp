class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int>sum(cardPoints.size(),0);
        int Sum=0;
        int n=cardPoints.size();
        for(int i=0;i<n;i++){
             Sum+=cardPoints[i];
             sum[i]=Sum;
        }
        if(n==k){
            return Sum;
        }
        int score=0;
        int ans=0;
        for(int i=0;i<=k;i++){
            int j=i+n-k-1;
            if(i==0) ans=sum[j];
            else ans=sum[j]-sum[i-1];
            score=max(score,Sum-ans);
        }

       return score; 
    }
};
