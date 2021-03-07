#include<bits/stdc++
using namespace 

int main() {
    long int forwardSteps, backwardSteps,  forwardDitch, backwardDitch, time;
    cin >> forwardSteps >> backwardSteps >>  forwardDitch >> backwardDitch >> time;
    backwardDitch = -backwardDitch;
    if (forwardSteps == backwardSteps) {
        if (forwardSteps >= forwardDitch) {
            cout << ( forwardDitch*time);
        } else {
            cout << "NO";
        } 
    } else {
            int p = 0, t = 0;
            while (true) {
                if(p+forwardSteps >= forwardDitch) {
                    cout << "F " << (t+ forwardDitch-p)*time;
                    break;
                } else {
                    p = p+forwardSteps;
                    t = t+forwardSteps;
                }
                if(p-backwardSteps <= backwardDitch) {
                    cout << "B " << (t-backwardDitch+p)*time;
                    break;
                } else {
                    p = p-backwardSteps;
                    t = t+backwardSteps;
                }
            }
    }
}