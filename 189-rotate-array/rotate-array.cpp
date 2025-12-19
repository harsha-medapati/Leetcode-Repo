class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<long long>q;
        int i;
        for(i=nums.size()-1;i>=0;i--) q.push(nums[i]);
        while(k>0)
        {
            long long num = q.front();
            q.pop();
            q.push(num);
            k--;
        }
        nums.clear();
        while(!q.empty())
        {
            nums.push_back(q.front());
            q.pop();
        }
        reverse(nums.begin(),nums.end());
    }
};