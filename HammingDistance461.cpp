//
// Created by Zhang Junpeng on 13/01/2017.
//

#include <iostream>
#include <iomanip>

//int hamming_distance(int x, int y) {
//    int distance = 0;
//
//    int bitset = x ^y;
//
//    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
//        int bit = (bitset >> i) & 1;
//        distance += bit;
//    }
//
//    return distance;
//}

int hamming_distance(int x, int y) {
    int distance = 0;

    int bitset = x ^y;

    while (bitset) {
        distance += bitset & 1;
        bitset >>= 1;
    }

    return distance;
}

int main() {
    int x = 1, y = 4;

    std::cout << "x:\t" << std::setbase(2) << x << std::endl;
    std::cout << "y:\t" << std::setbase(2) << y << std::endl;

    std::cout << "Hamming Distance:\t" << std::dec << hamming_distance(x, y) << std::endl;

    return 0;
}