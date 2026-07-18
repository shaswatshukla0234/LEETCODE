class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hr = stoi(endTime.substr(0)) - stoi(startTime.substr(0));
        int min = stoi(endTime.substr(3)) + hr * 60;
        min -= stoi(startTime.substr(3));
        int startSec = stoi(startTime.substr(6));
        int endSec = stoi(endTime.substr(6));
        if (endSec < startSec) {
            min--;
            endSec += 60;
        }

        return min * 60 + (endSec - startSec);
    }
};