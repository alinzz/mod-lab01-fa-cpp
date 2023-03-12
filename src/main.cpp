// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    using std::cout;
    const char* str = "Moscow is the capital of Russia";
    cout << "Words without numbers: " << faStr1(str);
    cout << "Words with capital letters: : " << faStr2(str);
    cout << "Average word length: " << faStr3(str);
}
