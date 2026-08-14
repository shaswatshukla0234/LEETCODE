class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0], y1 = rec1[1] , x2 = rec1[2] , y2 = rec1[3];
        int x3 = rec2[0], y3 = rec2[1] , x4 = rec2[2] , y4 = rec2[3];

        bool rec1_left = (x2 <= x3);
        bool rec1_right = (x1 >= x4);
        bool rec1_below = (y2 <= y3);
        bool rec1_above = (y1 >= y4);
        return !(rec1_left || rec1_right  || rec1_below || rec1_above);

    }
};