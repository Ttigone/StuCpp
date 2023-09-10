#include "../../include/likou/7.h"
#include <iostream>
#include <cmath>



#ifdef FIRST
int Solution::reverse(long x) {

    std::vector<int> record;
    int keep = 0; // if x = 0, keep = 1, then, keep = 0
    if (x < 0) {
        x = -x;
        keep = 1;
    }
    while (x > 0) {
        if (x % 10 == 0 && record.size() == 0) { // tail num is 0
            x /= 10;
            continue;
        }
        record.push_back(x % 10);
        x /= 10;
    }
    long long sum = 0;
    for (int i = 0; i < record.size(); ++i) {
        sum +=  record[i] * pow(10, record.size() - i - 1);
    }
    if (sum > SIG_ATOMIC_MAX) {
        return 0;
    }
    if (keep) { // It's a negative number
        return -sum;
    }
    return sum;

}
#endif


#ifdef SECOND
int Solution::reverse(int x) {
    long n;
    while (x) {
        n = n * 10 + x % 10;
        x /= 10;
    }
    return n > INT_MAX || n < INT_MIN ? 0 : n;
}
#endif
