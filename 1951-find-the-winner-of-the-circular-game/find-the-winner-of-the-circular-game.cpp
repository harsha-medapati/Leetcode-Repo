class Solution {
public:
    int findTheWinner(int n, int k) {
        int i;
        queue<int>q;
        for(i=1;i<=n;i++) q.push(i);
        while(q.size() > 1)
        {
            int c = k-1;
            while(c)
            {
                q.push(q.front());
                q.pop();
                c--;
            }
            q.pop();
        }
        return q.front();
    }
};