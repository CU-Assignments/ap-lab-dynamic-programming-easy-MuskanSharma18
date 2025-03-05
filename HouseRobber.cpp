class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=0, nxt=0;
        for(int ele : nums){
            int chk = max(prev, nxt+ele);
            nxt=prev;
            prev=chk;
        }
        return prev;
    }
};
