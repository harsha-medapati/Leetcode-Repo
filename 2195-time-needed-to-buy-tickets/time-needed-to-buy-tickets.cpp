class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i,val,c=0;
        deque<int>q;
        for(i=0;i<tickets.size();i++)
        {
            q.push_back(tickets[i]);
        }
        val = q[k];
        q[k] = -1;
        while(val)
        {
            if(q.front() == -1)
            {
                val--;
            }
            c++;
            int m = q.front();
            if(m > 0)
            {
                m = m-1;
            }
            q.pop_front();
            if(m == 0)
            {
                continue;
            }
            q.push_back(m);
        }
        return c;
    }
};