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
        int current = 0, timeTaken = 0;
        while (1) {
            if(current+forwardSteps >= forwardDitch) {
                cout << "F " << (timeTaken+ forwardDitch-current)*time;
                break;
            } else {
                current = current+forwardSteps;
                timeTaken = timeTaken+forwardSteps;
            }
            if(current-backwardSteps <= backwardDitch) {
                cout << "B " << (timeTaken-backwardDitch+current)*time;
                break;
            } else {
                current = current-backwardSteps;
                timeTaken = timeTaken+backwardSteps;
            }
        }
    }
}