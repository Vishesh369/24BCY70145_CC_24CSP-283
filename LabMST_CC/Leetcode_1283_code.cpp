#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& a1, int b2) {
        int x9 = 1;
        int y7 = *max_element(a1.begin(), a1.end());
        int z5 = y7;

        while (x9 <= y7) {
            int m3 = x9 + (y7 - x9) / 2;

            if (f4(a1, m3) <= b2) {
                z5 = m3;
                y7 = m3 - 1;
            } else {
                x9 = m3 + 1;
            }
        }
        return z5;
    }

private:
    int f4(vector<int>& p8, int q6) {
        int r2 = 0;
        for (int t1 : p8) {
            r2 += (t1 + q6 - 1) / q6;
        }
        return r2;
    }
};