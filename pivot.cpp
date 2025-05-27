#include <iostream>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        long long total = (long long)n * (n + 1) / 2;
        int lo = 1, hi = n;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            long long leftSum  = (long long)mid * (mid + 1) / 2;
            long long rightSum = total - (long long)(mid - 1) * mid / 2;
            if (leftSum == rightSum) return mid;
            if (leftSum < rightSum)   lo = mid + 1;
            else                       hi = mid - 1;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    // You can change these test values or read from stdin
    int tests[] = {3, 8, 10, 20};
    for (int n : tests) {
        int pivot = sol.pivotInteger(n);
        if (pivot != -1)
            cout << "n = " << n << " => pivot = " << pivot << "\n";
        else
            cout << "n = " << n << " => no pivot exists\n";
    }
    return 0;
}
