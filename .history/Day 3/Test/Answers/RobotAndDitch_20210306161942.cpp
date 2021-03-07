#include<bits/stdc++.h>
using namespace  std;

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
    }else{
        int cur = 0, t = 0;
        while (true) {
            if(cur+forwardSteps >= forwardDitch) {
                cout << "F " << (t+ forwardDitch-cur)*time;
                break;
            } else {
                cur = cur+forwardSteps;
                t = t+forwardSteps;
            }
            if(cur-backwardSteps <= backwardDitch) {
                cout << "B " << (t-backwardDitch+cur)*time;
                break;
            } else {
                cur = cur-backwardSteps;
                t = t+backwardSteps;
            }
        }
    }
}