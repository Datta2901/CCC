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
        int current = 0,  = 0;
        while (true) {
            if(current+forwardSteps >= forwardDitch) {
                cout << "F " << (+ forwardDitch-current)*time;
                break;
            } else {
                current = current+forwardSteps;
                 = +forwardSteps;
            }
            if(current-backwardSteps <= backwardDitch) {
                cout << "B " << (-backwardDitch+current)*time;
                break;
            } else {
                current = current-backwardSteps;
                 = +backwardSteps;
            }
        }
    }
}