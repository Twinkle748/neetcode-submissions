class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num : nums){
            freq[num]++;
        }
        vector<pair<int,int>>v;
        for(auto& i : freq){
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),[](auto& a ,auto& b){
            return a.second>b.second;
        });
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(v[i].first);
        }
        return  res;
    }
};
