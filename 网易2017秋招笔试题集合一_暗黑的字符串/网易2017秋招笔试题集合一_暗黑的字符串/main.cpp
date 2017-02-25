//
//  main.cpp
//  网易2017秋招笔试题集合一_暗黑的字符串
//
//  Created by 李林 on 2017/2/20.
//  Copyright © 2017年 lee. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

class Solution{
public:
    long long calculateCount(int N){
        if(N == 1)    return 3;
        else if(N == 2) return 9;
        else{
            return 2*calculateCount(N-1)+calculateCount(N-2);
        }
    }
private:
    
};

int main(int argc, const char * argv[]) {
    
    Solution s;
    int N;
    scanf("%d", &N);
    
    long long result = s.calculateCount(N);
    printf("%lld", result);
    
    return 0;
}
