#include <iostream>
#include <vector>
#include "283.h"
using namespace std;

// void exercise()
// {
//     vector<int>nums = {5,7,7,8,8,10};
// }

int main()
{
    // exercise();
    vector<int>nums = {5,7,7,8,0,0, 0, 0 , 0, 0,8,10};
    Solution s;
    s.moveZeroes(nums);
    for (auto i : nums) {
        cout << i << " ";
    }
    system("pause");
    return 0;
}
