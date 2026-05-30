class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1)
        {
            sort(stones.begin() , stones.end());
            int n = stones.size();
            int lar = stones[n-1];
            int slar = stones[n-2];

            stones.pop_back();
            stones.pop_back();

            if(lar != slar)
            {
                stones.push_back(lar - slar);
            }
        }

        if(stones.size() == 0)
        {
            return 0;
        }
        return stones[0];
    }
};