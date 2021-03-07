#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int forwardSt, b, fd, bd, st;
    std::cin >> forwardSt >> b >> fd >> bd >> st;
    bd = -bd;
    if (forwardSt == b) {
        if (forwardSt>=fd) {
            std::cout << (fd*st);
        } else {
            std::cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forwardSt >=fd) {
                    std::cout << "F " << (t+fd-p)*st;
                    break;
                } else {
                    p = p+forwardSt;
                    t = t+forwardSt;
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