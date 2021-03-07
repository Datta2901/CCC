#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int forw, b, fd, bd, st;
    std::cin >> forw >> b >> fd >> bd >> st;
    bd = -bd;
    if (forw == b) {
        if (forw>=fd) {
            std::cout << (fd*st);
        } else {
            std::cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forw >=fd) {
                    std::cout << "F " << (t+fd-p)*st;
                    break;
                } else {
                    p = p+forw;
                    t = t+forw;
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