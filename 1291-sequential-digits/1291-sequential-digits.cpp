class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        string s = "123456789";
        vector<int> ans;
        int lenLow = 0;
        int temp = low;
        while (temp) {
            lenLow++;
            temp /= 10;
        }
        int lenHigh = 0;
        temp = high;
        while (temp) {
            lenHigh++;
            temp /= 10;
        }
        for (int len = lenLow; len <= lenHigh; len++) {
            for (int start = 0; start + len <= 9; start++) {

                string part = s.substr(start, len);
                int num = stoi(part);

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        return ans;
    }
};