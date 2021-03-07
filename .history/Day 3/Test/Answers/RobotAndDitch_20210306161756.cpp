#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int forwardSteps, backwardSteps,  forwardDitch, bac, st;
    std::cin >> forwardSteps >> backwardSteps >>  forwardDitch >> bac >> st;
    bac = -bac;
    if (forwardSteps == backwardSteps) {
        if (forwardSteps>= forwardDitch) {
            std::cout << ( forwardDitch*st);
        } else {
            std::cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forwardSteps >= forwardDitch) {
                    std::cout << "F " << (t+ forwardDitch-p)*st;
                    break;
                } else {
                    p = p+forwardSteps;
                    t = t+forwardSteps;
                }
                if(p-backwardSteps <= bac) {
                    std::cout << "B " << (t-bac+p)*st;
                    break;
                } else {
                    p = p-backwardSteps;
                    t = t+backwardSteps;
                }
            }
    }
}