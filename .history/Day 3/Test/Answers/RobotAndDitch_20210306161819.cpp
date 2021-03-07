#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int forwardSteps, backwardSteps,  forwardDitch, backwardDitch, ;
    std::cin >> forwardSteps >> backwardSteps >>  forwardDitch >> backwardDitch >> ;
    backwardDitch = -backwardDitch;
    if (forwardSteps == backwardSteps) {
        if (forwardSteps>= forwardDitch) {
            std::cout << ( forwardDitch*);
        } else {
            std::cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forwardSteps >= forwardDitch) {
                    std::cout << "F " << (t+ forwardDitch-p)*;
                    break;
                } else {
                    p = p+forwardSteps;
                    t = t+forwardSteps;
                }
                if(p-backwardSteps <= backwardDitch) {
                    std::cout << "B " << (t-backwardDitch+p)*;
                    break;
                } else {
                    p = p-backwardSteps;
                    t = t+backwardSteps;
                }
            }
    }
}