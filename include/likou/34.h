#pragma once
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target);
private:
    int getRight(vector<int>& nums, int target);
    int getLeft(vector<int>& nums, int target);
};