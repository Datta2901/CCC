#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int forwardSteps, backwardSteps,  forward, bd, st;
    std::cin >> forwardSteps >> backwardSteps >>  forward >> bd >> st;
    bd = -bd;
    if (forwardSteps == backwardSteps) {
        if (forwardSteps>= forward) {
            std::cout << ( forward*st);
        } else {
            std::cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forwardSteps >= forward) {
                    std::cout << "F " << (t+ forward-p)*st;
                    break;
                } else {
                    p = p+forwardSteps;
                    t = t+forwardSteps;
                }
                if(p-backwardSteps <= bd) {
                    std::cout << "B " << (t-bd+p)*st;
                    break;
                } else {
                    p = p-backwardSteps;
                    t = t+backwardSteps;
                }
            }
    }
}