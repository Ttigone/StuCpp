#include "135.h"

int Solution::candy(vector<int>& ratings) {
    vector<int> candy(ratings.size(), 1);
    if (ratings.size() < 2) {
        return ratings.size();
    }
    for (int i = 1; i < ratings.size(); ++i) {
        if (ratings.at(i) > ratings.at(i - 1)) {
            candy.at(i) = candy.at(i - 1) + 1;
        }
    }
    for (int j = ratings.size() - 1; j > 0; --j) {
        if (ratings.at(j) < ratings.at(j - 1)) {
            candy.at(j - 1) = max(candy.at(j - 1), candy.at(j) + 1);
        }
    }
    return accumulate(candy.begin(), candy.end(), 0);
}