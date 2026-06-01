class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin() , cost.end() , greater<int>());
        int newcost = 0;
       for(int i = 0 ; i < n ; i++)
       {
        if((i+1) % 3 != 0)
        {
            newcost += cost[i];
        }
       }
        return newcost;
    }
};