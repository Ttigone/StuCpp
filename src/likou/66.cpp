#include "../../include/likou/66.h"

#define FITST

#define SECOND


#ifdef FITST
#include <cmath>
#include <iostream>
#include <utility>
#endif


#ifdef SECOND

#endif


std::vector<int> Solution::plusOne(std::vector<int> &digits) {


#ifdef FIRST

// Extract the number from each position of vec, increment it, 
// then put it back not applicable, number out of range, error

    int num = 0;
    for (int i = digits.size() - 1, j = 0; i >= 0; --i, ++j) {
        num += digits.at(i) * pow(10, j);
    }
    num += 1;
    digits.clear();
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    for (int i = 0; i < digits.size() / 2; ++i) {
        std::swap(digits.at(i), digits.at(digits.size() - i - 1));
    }
    return digits;

#endif

#ifdef SECOND
// Increment the array by 1 from a digit, 
// set it to 0 when the number is 9, and increment it forward

// the first num is 9, how to fix it ?

    for (int i = digits.size() - 1; i >= 0; --i) {
        if (digits.at(i) < 9) {
            digits.at(i) += 1;
            return digits;   
        } else {
            digits.at(i) = 0;  // current position is set 0
            if (i == 0) { // the first num is 9 and it is plusing 1
                // digits.push_front(1);
                digits.insert(digits.begin(), 1);
            };
        }
    }
    return digits;


#endif


}