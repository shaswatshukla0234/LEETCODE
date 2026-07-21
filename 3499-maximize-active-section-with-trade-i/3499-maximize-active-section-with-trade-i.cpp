class Solution {
public:
//0 1 0 0
     int maxActiveSectionsAfterTrade(string s) {
        int totalOnes = 0;
        vector<int> zeroGroups; // 1 2 
        int currentZeros = 0;
        for (char c : s) 
        {
            if (c == '1') {
                totalOnes++;
                if (currentZeros > 0) {
                    zeroGroups.push_back(currentZeros);
                    currentZeros = 0;
                }
            } else {
                currentZeros++;
            }
        }
        if (currentZeros > 0) 
        {
            zeroGroups.push_back(currentZeros);
        }// 1 2
        if (zeroGroups.size() < 2) {
            return totalOnes;
        }
        int maxZeroMerge = 0;
        for (size_t i = 0; i < zeroGroups.size() - 1; i++) {
            maxZeroMerge = max(maxZeroMerge, zeroGroups[i] + zeroGroups[i + 1]);
        }

        return totalOnes + maxZeroMerge;
    }
};
