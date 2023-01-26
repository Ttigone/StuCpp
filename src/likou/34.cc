#include "34.h"
/*
给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。
如果数组中不存在目标值 target，返回 [-1, -1]。
你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。
*/
int getRight(vector<int>& nums, int target);
int getLeft(vector<int>& nums, int target);


    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBoard = getLeft(nums, target);
        int rightBoard = getRight(nums, target);
        if (leftBoard == -2 || rightBoard == -2) { // 倘若 leftBoard == -2 ，那么 target 小于数组所有值
            return {-1, -1};                       // 倘若 rightBoard == -2, 那么 target 大于数组所有值
        }
        if (rightBoard - leftBoard > 1) {  // leftBoard 存储左边界下标 - 1， rightBoard 存储右边界下标 + 1， 
            return {leftBoard + 1, rightBoard - 1}; // 如果数组中只有一个 target，那也能返回第一个位置和最后一个位置(同一个位置) 
        }
        return {-1, -1};   // 数组中不存在 target ,但 target 处于数组值区间内
    }
    int getRight(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;  // 左闭右闭
        int rightBoard = -2;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] <= target) {   // 找右边界，只用看当nums[middle] == target 时获得的 rightBoard 的右边
                left = middle + 1;          // 倘若找不到新一个 rightBoard ,那么原来 rightBoard 就是右边界
                rightBoard = left; 
            } else {
                right = middle - 1;
            }
        }
        return rightBoard;            // leftBoard 是左边界下标 减 1 
    }                                 // rightBoard 是右边界下标 加 1
    int getLeft(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;  // 左闭右闭
        int leftBoard = -2;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] >= target) {   // 找左边界，只用看当nums[middle] == target 时获得的 leftBoard 的左边
                right = middle - 1;         // 倘若找不到新一个 leftBoard ,那么原来 leftBoard 就是左边界
                leftBoard = right;
            } else {
                left = middle + 1;
            }
        }
        return leftBoard;
    }
