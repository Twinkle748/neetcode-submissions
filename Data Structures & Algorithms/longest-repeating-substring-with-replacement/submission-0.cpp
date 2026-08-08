class Solution {
public:
    int characterReplacement(string s, int k) {
       int maxlen = 0;
       int maxfreq =0;
       int l=0;

       unordered_map<int,int>mp;
       for(int i=0;i<s.size();i++){
        mp[s[i]-'A']++;
        maxfreq = max(maxfreq,mp[s[i]-'A']);
        while((i-l+1)-maxfreq>k){
            mp[s[l]-'A']--;
            l++; 
            
        }
        maxlen = max(maxlen,i-l+1);
       }
       return maxlen;
       
      

        

            
        
    }
};
