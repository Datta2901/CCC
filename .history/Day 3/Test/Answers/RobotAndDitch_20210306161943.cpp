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
        int current = 0, t = 0;
        while (true) {
            if(current+forwardSteps >= forwardDitch) {
                cout << "F " << (t+ forwardDitch-current)*time;
                break;
            } else {
                current = current+forwardSteps;
                t = t+forwardSteps;
            }
            if(current-backwardSteps <= backwardDitch) {
                cout << "B " << (t-backwardDitch+current)*time;
                break;
            } else {
                current = current-backwardSteps;
                t = t+backwardSteps;
            }
        }
    }
}