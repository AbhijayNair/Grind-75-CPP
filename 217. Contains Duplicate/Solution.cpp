class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(auto n: nums){
            if(seen.count(n))
                return true;
            seen.insert(n);
        }
        return false;
    }
};