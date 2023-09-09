class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int>,greater<int>> p1,p2;
        long long ans=0;
        int cnt=0,i=0,j=costs.size()-1;
        while(cnt<k)
        {
            while(p1.size()<candidates && i<=j)p1.push(costs[i++]);
            while(p2.size()<candidates && j>=i)p2.push(costs[j--]);
            int a=p1.size()>0?p1.top():INT_MAX;
            int b=p2.size()>0?p2.top():INT_MAX;
            if(a<=b)
            {
                ans+=a;
                p1.pop();
            }
            else
            {
                ans+=b;
                p2.pop();
            }
            cnt++;
        }
        return ans;
        
    }
};
