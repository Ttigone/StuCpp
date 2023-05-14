#pragma once 
#include <iostream>
#include <vector>
#include <string>
using std::vector;
template<typename T>
class add {
public:
    add();
private:
    vector<T> addnum1_;
    vector<T> addnum2_;
    vector<T> finalResult;
    vector<int> ss;
};