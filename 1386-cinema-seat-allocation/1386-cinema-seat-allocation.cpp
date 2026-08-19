class Solution {
public:
    bool check(int i, int j, vector<int>& seats) {
        while (i <= j) {
            if (seats[i] == 0)
                return false;
            i++;
        }
        return true;
    }

    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        sort(reservedSeats.begin(), reservedSeats.end());

        int count = 0;
        int reservedRows = 0;

        int i = 0;

        while (i < reservedSeats.size()) {

            int row = reservedSeats[i][0];
            reservedRows++;
            vector<int> seats(11, 1);
            while (i < reservedSeats.size() &&
                   reservedSeats[i][0] == row) {

                seats[reservedSeats[i][1]] = 0;
                i++;
            }
            bool left = check(2, 5, seats);
            bool middle = check(4, 7, seats);
            bool right = check(6, 9, seats);

            if (left && right) {
                count += 2;
            }
            else if (left || middle || right) {
                count++;
            }
        }
        count += (n - reservedRows) * 2;
        return count;
    }
};