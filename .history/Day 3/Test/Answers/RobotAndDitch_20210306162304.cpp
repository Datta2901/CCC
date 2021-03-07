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
        int current = 0, s = 0;
        while (1) {
            if(current+forwardSteps >= forwardDitch) {
                cout << "F " << (s+ forwardDitch-current)*time;
                break;
            } else {
                current = current+forwardSteps;
                s = s+forwardSteps;
            }
            if(current-backwardSteps <= backwardDitch) {
                cout << "B " << (s-backwardDitch+current)*time;
                break;
            } else {
                current = current-backwardSteps;
                s = s+backwardSteps;
            }
        }
    }
}