class Solution {
public:
    int characterReplacement(string s, int k) {
ii        int i=0,j=0,ans=0,cnt[26]={};
        for(j=0;j<s.size();j++){
            cnt[s[j]-'A']++;
            while(j-i+1 - *max_element(cnt,cnt+26)>k){
                cnt[s[i]-'A']--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        
        return ans;
    }
};
