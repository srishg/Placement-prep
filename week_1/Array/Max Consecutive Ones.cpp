class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxsize=0;
        for(auto num:nums){
            if(num==0){
            maxsize=max(maxsize,cnt);
            cnt=0;
            }
            else{
                cnt++;
            }
        }
        return max(maxsize,cnt);
    }
};
