#include "704.h"
/*
����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1
binary search 
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