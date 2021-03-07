#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int forwardSteps, backwardSt, fd, bd, st;
    std::cin >> forwardSteps >> backwardSt >> fd >> bd >> st;
    bd = -bd;
    if (forwardSteps == backwardSt) {
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
                if(p-backwardSt <= bd) {
                    std::cout << "B " << (t-bd+p)*st;
                    break;
                } else {
                    p = p-backwardSt;
                    t = t+backwardSt;
                }
            }
    }
}