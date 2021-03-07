#include<bits/stdc++.h>
using namespace  std;

int main() {
    long int forwardSteps, backwardSteps,  forwardDitch, backwardDitch, time;
    cin >> forwardSteps >> backwardSteps >>  forwardDitch >> backwardDitch >> time;
    backwardDitch = -backwardDitch;
    if (forwardSteps == backwardSteps) {
        if (forwardSteps >= forwardDitch) {
            cout << ( forwardDitch*time);
        }else {
            cout << "NO";
        } 
    }else{
        int current = 0, dist = 0;
        while(!false) {
            if(current+forwardSteps >= forwardDitch) {
                cout << "F " << (dist+ forwardDitch-current)*time;
                break;
            } else {
                current = current+forwardSteps;
                dist = dist+forwardSteps;
            }
            if(current-backwardSteps <= backwardDitch) {
                cout << "B " << (dist-backwardDitch+current)*time;
                break;
            } else {
                current = current-backwardSteps;
                dist = dist+backwardSteps;
            }
        }
    }
}