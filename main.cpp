#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <chrono>
#include <cmath>


#include "include/likou/1588.h"

using namespace std;



int main() 
{
    auto start = std::chrono::high_resolution_clock::now();


    Solution s;
    vector<int> a = {10, 11, 12};
    cout << s.sumOddLengthSubarrays(a);




       


    auto end = std::chrono::high_resolution_clock::now();
    auto runTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    cout << endl;
    std::cout << "run time: " << runTime.count() << "us" << endl;

    return 0;
}