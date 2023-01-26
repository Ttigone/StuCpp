#include "704.h"
/*
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1
*/
int search(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right){
        int middle = left + (right - left) / 2;
        if (nums[middle] < target){
            left = middle + 1;
        }
        else if (nums[middle] > target){
            right = middle - 1;
        }
        else{
            return middle;
        }
    }
    return -1;
}