class Solution {
public:
int longestOnes(vector<int>& nums, int k) {
    int i=0,j=0;
    int countzero=0;

    int ans=INT_MIN;
    while(j<nums.size()){
        if(nums[j]==0){
            countzero++;
        }
        while(countzero>k){
            if(nums[i]==0){
                countzero--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
    }
   return ans;
    
    }
};
