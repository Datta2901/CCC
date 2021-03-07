#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int forward, b, fd, bd, st;
    std::cin >> forward >> b >> fd >> bd >> st;
    bd = -bd;
    if (forward == b) {
        if (forward>=fd) {
            std::cout << (fd*st);
        } else {
            std::cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forward >=fd) {
                    std::cout << "F " << (t+fd-p)*st;
                    break;
                } else {
                    p = p+forward;
                    t = t+forward;
                }
                if(p-b <= bd) {
                    std::cout << "B " << (t-bd+p)*st;
                    break;
                } else {
                    p = p-b;
                    t = t+b;
                }
            }
    }
}