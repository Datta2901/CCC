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
        int  = 0, t = 0;
        while (true) {
            if(+forwardSteps >= forwardDitch) {
                cout << "F " << (t+ forwardDitch-)*time;
                break;
            } else {
                 = +forwardSteps;
                t = t+forwardSteps;
            }
            if(-backwardSteps <= backwardDitch) {
                cout << "B " << (t-backwardDitch+)*time;
                break;
            } else {
                 = -backwardSteps;
                t = t+backwardSteps;
            }
        }
    }
}