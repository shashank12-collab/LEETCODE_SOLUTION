class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        if (n == 0) {
            return true;
        }
        if (m == 1) {
            if (flowerbed[0] == 0 && n <= 1)
                return true;
            return false;
        }
        if (flowerbed.size() < 2) {
            return false;
        }

        int l = 0;
        int current = 1;
        int r = 2;
        for (int i = 0; i < m; i++) {
            if (i != 0) {
                l = flowerbed[i - 1];
            }
            if (i != m - 1) {
                r = flowerbed[i + 1];
            }
            if (l == 0 && flowerbed[i] == 0 && r == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }
        if (n <= 0) {
            return true;
        }
        return false;
    }
};