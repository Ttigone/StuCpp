#include "34.h"
/*
����һ�����շǵݼ�˳�����е��������� nums����һ��Ŀ��ֵ target�������ҳ�����Ŀ��ֵ�������еĿ�ʼλ�úͽ���λ�á�
��������в�����Ŀ��ֵ target������ [-1, -1]��
�������Ʋ�ʵ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��������⡣
*/
int getRight(vector<int>& nums, int target);
int getLeft(vector<int>& nums, int target);


    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBoard = getLeft(nums, target);
        int rightBoard = getRight(nums, target);
        if (leftBoard == -2 || rightBoard == -2) { // ���� leftBoard == -2 ����ô target С����������ֵ
            return {-1, -1};                       // ���� rightBoard == -2, ��ô target ������������ֵ
        }
        if (rightBoard - leftBoard > 1) {  // leftBoard �洢��߽��±� - 1�� rightBoard �洢�ұ߽��±� + 1�� 
            return {leftBoard + 1, rightBoard - 1}; // ���������ֻ��һ�� target����Ҳ�ܷ��ص�һ��λ�ú����һ��λ��(ͬһ��λ��) 
        }
        return {-1, -1};   // �����в����� target ,�� target ��������ֵ������
    }
    int getRight(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;  // ����ұ�
        int rightBoard = -2;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] <= target) {   // ���ұ߽磬ֻ�ÿ���nums[middle] == target ʱ��õ� rightBoard ���ұ�
                left = middle + 1;          // �����Ҳ�����һ�� rightBoard ,��ôԭ�� rightBoard �����ұ߽�
                rightBoard = left; 
            } else {
                right = middle - 1;
            }
        }
        return rightBoard;            // leftBoard ����߽��±� �� 1 
    }                                 // rightBoard ���ұ߽��±� �� 1
    int getLeft(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;  // ����ұ�
        int leftBoard = -2;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] >= target) {   // ����߽磬ֻ�ÿ���nums[middle] == target ʱ��õ� leftBoard �����
                right = middle - 1;         // �����Ҳ�����һ�� leftBoard ,��ôԭ�� leftBoard ������߽�
                leftBoard = right;
            } else {
                left = middle + 1;
            }
        }
        return leftBoard;
    }
