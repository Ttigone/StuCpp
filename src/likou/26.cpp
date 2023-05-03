#include "26.h"

    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            int fast_point = i + 1;
            int slow_point = i + 1;
            for (; fast_point < size; ++fast_point) {
                if (nums.at(i) != nums.at(fast_point)) {
                    nums.at(slow_point++) = nums.at(fast_point);
                }
            } // 删除了第一个元素的重复项
            size = size - fast_point + slow_point;
        }
        return size;
    }