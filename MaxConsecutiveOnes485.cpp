//
// Created by Zhang Junpeng on 15/01/2017.
//

#include <vector>
#include <iostream>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums) {
    int count = 0;
    int max_count = count;

    for (int i = 0; i < nums.size(); ++i) {
        if(nums[i] == 0) {
            max_count = (max_count <= count) ? count : max_count;
            count = 0;
        } else {
            count ++;
        }
    }

    return max_count = (max_count <= count) ? count : max_count;
}


int main() {
    vector<int> test{1,1,1,0,1,1,1,0,1,1,1,1,0,1};
    cout << findMaxConsecutiveOnes(test) << endl;
}

