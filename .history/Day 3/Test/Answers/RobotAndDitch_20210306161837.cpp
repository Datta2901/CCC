#include <cmath>
#include <cstdi>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int forwardSteps, backwardSteps,  forwardDitch, backwardDitch, time;
    std:cin >> forwardSteps >> backwardSteps >>  forwardDitch >> backwardDitch >> time;
    backwardDitch = -backwardDitch;
    if (forwardSteps == backwardSteps) {
        if (forwardSteps >= forwardDitch) {
            std:cout << ( forwardDitch*time);
        } else {
            std:cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forwardSteps >= forwardDitch) {
                    std:cout << "F " << (t+ forwardDitch-p)*time;
                    break;
                } else {
                    p = p+forwardSteps;
                    t = t+forwardSteps;
                }
                if(p-backwardSteps <= backwardDitch) {
                    std:cout << "B " << (t-backwardDitch+p)*time;
                    break;
                } else {
                    p = p-backwardSteps;
                    t = t+backwardSteps;
                }
            }
    }
}