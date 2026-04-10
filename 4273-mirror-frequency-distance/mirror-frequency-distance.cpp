class Solution {
public:
    int mirrorFrequency(string s) {
        int n = s.size();
        int freq = 0;
        unordered_map<char , int>mpp;
        for(auto it :s){
            mpp[it]++;
        }

        unordered_set<char>visited;
        
        for(auto it : mpp){
            char c = it.first;

            if(visited.count(c)) continue;

            char m;
            if(isalpha(c)){
                m = 'z' - (c - 'a');
            }
            else{
                m = '9' - (c - '0');
            }

            int freq1 = mpp[c];
            int freq2 = mpp.count(m)? mpp[m] : 0;

            freq += abs(freq1 - freq2);

            visited.insert(c);
            visited.insert(m);
        }
        return freq;
    }
};