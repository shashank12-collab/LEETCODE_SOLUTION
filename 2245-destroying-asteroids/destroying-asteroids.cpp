class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        sort(asteroids.begin() , asteroids.end());
        long long currmass = mass;
        for(int i = 0 ; i < n ; i++)
        {
            if(currmass < asteroids[i])
            {
            return false;
            }
                currmass += asteroids[i];
        }
        return true;
    }
};