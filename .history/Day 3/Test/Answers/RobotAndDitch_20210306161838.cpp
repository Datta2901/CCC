#include <cmath>
#include <cst>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace st

int main() {
    long int forwardSteps, backwardSteps,  forwardDitch, backwardDitch, time;
    stcin >> forwardSteps >> backwardSteps >>  forwardDitch >> backwardDitch >> time;
    backwardDitch = -backwardDitch;
    if (forwardSteps == backwardSteps) {
        if (forwardSteps >= forwardDitch) {
            stcout << ( forwardDitch*time);
        } else {
            stcout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forwardSteps >= forwardDitch) {
                    stcout << "F " << (t+ forwardDitch-p)*time;
                    break;
                } else {
                    p = p+forwardSteps;
                    t = t+forwardSteps;
                }
                if(p-backwardSteps <= backwardDitch) {
                    stcout << "B " << (t-backwardDitch+p)*time;
                    break;
                } else {
                    p = p-backwardSteps;
                    t = t+backwardSteps;
                }
            }
    }
}