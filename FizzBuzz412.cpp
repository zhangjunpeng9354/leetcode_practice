//
// Created by Zhang Junpeng on 16/01/2017.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;

//vector<string> fizzBuzz(int n) {
//    vector<string> result(n);
//
//    for (int i = 0; i < n; ++i)
//        result[i] = '1' + i;
//
//    for (int i = 3; i <=n; i=i+3)
//        result[i-1] = "Fizz";
//
//    for (int i = 5; i <=n; i=i+5)
//        result[i-1] += "Buzz";
//
//    return result;
//}

vector<string> fizzBuzz(int n) {
    vector<string> r(n);

    string temp;
    temp = "0";

    for (int i = 3; i <= n; i += 3)
        r[i - 1] = "Fizz";

    for (int i = 5; i <= n; i += 5)
        r[i - 1].append("Buzz");

    int index = 0;
    for (int i = 0; i < n; ++i) {
        temp[index]++;
        int ind = index;
        while (ind > 0) {
            if (temp[ind] == '1' + 9) {
                temp[ind] = '0';
                ind --;
                temp[ind]++;
            } else {
                break;
            }
        }
        if (temp[0] == '1' + 9) {
            temp[0] = '0';
            temp = "1" + temp;
            index++;
        }

        if (r[i].empty()) {
            r[i] = temp;
        }
    }

    return r;
}

int main() {
    int num =100;
    vector<string> list = fizzBuzz(num);
    for (int i = 0; i < num; ++i) {
        cout << i + 1 << ":\t" << list[i] << endl;
    }

    return 0;
}

