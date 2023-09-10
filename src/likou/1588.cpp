#include "../../include/likou/1588.h"
#include <algorithm>
#include <numeric>


int Solution::sumOddLengthSubarrays(std::vector<int> &arr) {
    int sum = 0;
    int count = arr.size(); // get arr size
    int count_ = count;
    if (count % 2 == 0) {
        count -= 1;
    }
    for (; count >= 0; count -= 2) {
        for (int i = 0; i + count <= count_; ++i) {
            sum += std::accumulate(arr.begin() + i, arr.begin() + i + count, 0);
        }
    }
    return sum;
}