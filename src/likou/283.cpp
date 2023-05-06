#include "283.h"



void Solution::moveZeroes(vector<int>& nums) {
    int slow_point = 0;
    for (int fast_point = 0; fast_point < nums.size(); ++fast_point) {
        if (nums.at(fast_point) != 0) {
            nums.at(slow_point++) = nums.at(fast_point);
        }
    }
    for (; slow_point < nums.size(); ++slow_point) {
        nums.at(slow_point) = 0;
    }
}
//  *************************************************************** 自主做的笨方法
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> record;
//         record.resize(nums.size());
//         for (int i = 0; i < nums.size(); ++i) {
//             if (nums.at(i) == 0) {
//                 int temp = 0; // 记录交换次数
//                 for (int j = i + 1; j < nums.size(); ++j) {
//                     if (nums.at(j) != 0 && temp == 0) { // 交换一次
//                         swap(nums.at(i), nums.at(j));
//                         ++temp;
//                     } else {
//                         continue;
//                     }
//                 }
//             } else {
//                 continue;
//             }
//         }
//     }
// };