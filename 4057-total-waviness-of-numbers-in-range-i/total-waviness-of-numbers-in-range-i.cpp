class Solution {
public:
        int peakAndValleyEleNum(int x)
        {
            vector<int> newarr;
            int count = 0;
            while(x > 0)
            {
                int digit = x % 10;
                newarr.push_back(digit);
                x /= 10;
            }
            reverse(newarr.begin() , newarr.end());
            for(int i = 0 ; i < newarr.size() -1 ; i++)
            {
                if(i == 0)
                {
                    continue;
                }
                else if(newarr[i] > newarr[i+1] && newarr[i] > newarr[i-1])
                {
                    count++;
                }
                else if(newarr[i] < newarr[i+1] && newarr[i] < newarr[i-1])
                {
                    count++;
                }
            }
            return count;
        }
        int totalWaviness(int num1, int num2) {
        vector<int> arr;
        int waviness = 0;
        for(int i = num1 ; i <= num2 ; i++)
        {
            arr.push_back(i);
        }
        for(int i = 0 ; i < arr.size() ; i++)
        {
            waviness += peakAndValleyEleNum(arr[i]);
        }
        return waviness;
    }
};