//
// Created by Zhang Junpeng on 15/01/2017.
//

#include <iostream>

//int findComplement(int num) {
//    int dist = 0;
//    int k = 0;
//
//    while (num) {
//        dist |= ((num & 1) ^ 1) << k ;
////        dist |= (num & 0) << k;
//        num >>= 1;
//        k++;
//    }
//    return dist;
//}

int findComplement(int num) {
    int mask = ~0;

    while (num & mask) {
        mask <<= 1;
    }
    return ~mask & (~num);
}

int main() {
    int a = 5;
    std::cout << findComplement(a) << std::endl;
}