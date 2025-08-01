#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
struct Process {
    int pid;      
    int burstTime; 
    int arrivalTime; 
};
bool compareBurstTime(Process a, Process b) {
    return a.burstTime < b.burstTime;
}
void fifoScheduling(vector<Process> processes) {
    cout << "\nFIFO Scheduling:" << endl;
    int n = processes.size();
    int waitingTime = 0;
    int totalTime = 0;
    for (int i = 0; i < n; ++i) {
        cout << "Process " << processes[i].pid << ": Waiting Time = " << waitingTime << endl;
        totalTime += processes[i].burstTime;
        waitingTime += processes[i].burstTime;
    }
    cout << "Average Waiting Time: " << (double)(totalTime - waitingTime) / n << endl;
}
void sjfScheduling(vector<Process> processes) {
    cout << "\nSJF Scheduling:" << endl;
    sort(processes.begin(), processes.end(), compareBurstTime);
    int n = processes.size();
    int waitingTime = 0;
    int totalTime = 0;
    for (int i = 0; i < n; ++i) {
        cout << "Process " << processes[i].pid << ": Waiting Time = " << waitingTime << endl;
        totalTime += processes[i].burstTime;
        waitingTime += processes[i].burstTime;
    }
    cout << "Average Waiting Time: " << (double)(totalTime - waitingTime) / n << endl;
}
void srtfScheduling(vector<Process> processes) {
    cout << "\nSRTF Scheduling:" << endl;
    int n = processes.size();
    int completed = 0;
    int time = 0;
    int minm=INT_MAX;
    int shortest = 0;
    bool check = false;
    vector<int> remainingTime(n);
    for (int i = 0; i < n; ++i) {
        remainingTime[i] = processes[i].burstTime;
    }
    while (completed != n) {
        for (int j = 0; j < n; j++) {
            if ((processes[j].arrivalTime <= time) && (remainingTime[j] < minm) && remainingTime[j] > 0) {
                minm = remainingTime[j];
                shortest = j;
                check = true;
            }
        }
        if (!check) {
            time++;
            continue;
        }
        remainingTime[shortest]--;
        minm = remainingTime[shortest];
        if (minm == 0) minm = INT_MAX;
        if (remainingTime[shortest] == 0) {
            completed++;
            check = false;
            int finishTime = time + 1;
            int waitingTime = finishTime - processes[shortest].burstTime - processes[shortest].arrivalTime;
            if (waitingTime < 0) waitingTime = 0;
            cout << "Process " << processes[shortest].pid << ": Waiting Time = " << waitingTime << endl;
        }
        time++;
    }
}
int main() {
    vector<Process> processes = {
        {1, 6, 0},
        {2, 8, 0},
        {3, 7, 0},
        {4, 3, 0}
    };
    fifoScheduling(processes);
    sjfScheduling(processes);
    srtfScheduling(processes);
    return 0;
}