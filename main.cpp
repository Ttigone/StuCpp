#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
using i32 = long long;
class a {
public:
    vector<string> v;
    i32 n;
};
int main() 
{
    // int n;
    // vector<int> k(n);
    // for (int i = 0; i < n; ++i) {
    //     int s;
    //     cin >> s;
    //     k.push_back(s);
    // }
    // int j;
    // for (int i = 0; i < n - 1; i += j) {
    //     int t = k[i + 1];
    //     j = 1; // 没有改变就是往后移动一位
    //     if (k[i] < t - 1) { // 插入元素    递增
    //         int temp = k[i];
    //         j = t - 1 - k[i];   // 插入元素的个数
    //         int m = i + 1;   // 插入开始的位置
    //         for (auto v = k.begin(); j > 0; --j, ++m) {
    //             k.insert(v + m, ++temp);
    //         }
    //         int record = i + j;//  记录下一个开始的位置
    //     } else if (k[i] > t + 1) {  // 前 大于 后   递减
    //         int temp2 = k[i];
    //         j = k[i] - t - 1;
    //         int m2 = i + 1;
    //         for (auto v = k.begin(); j > 0; --j, ++m2) {
    //             k.insert(v + m2, --temp2);
    //         }
    //     }
    // }
    // for (auto i : k) {
    //     cout << i << " ";
    // }
    

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);  
    system("pause");
    return 0;
}