#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int forwardSteps, b, fd, bd, st;
    std::cin >> forwardSteps >> b >> fd >> bd >> st;
    bd = -bd;
    if (forwardSteps == b) {
        if (forwardSteps>=fd) {
            std::cout << (fd*st);
        } else {
            std::cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forwardSteps >=fd) {
                    std::cout << "F " << (t+fd-p)*st;
                    break;
                } else {
                    p = p+forwardSteps;
                    t = t+forwardSteps;
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