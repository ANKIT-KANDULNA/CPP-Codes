#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
struct Process {
    int pid;        
    int burstTime;   
    int priority;    
    int arrivalTime; 
};
bool comparePriority(Process a, Process b) {
    return a.priority < b.priority;
}
bool compareBurstTimeLJF(Process a, Process b) {
    return a.burstTime > b.burstTime;
}
void priorityScheduling(vector<Process> processes) {
    cout << "\nPriority Scheduling:" << endl;
    sort(processes.begin(), processes.end(), comparePriority);
    int n = processes.size();
    int waitingTime = 0;
    int totalWaitingTime = 0;
    for (int i = 0; i < n; ++i) {
        cout << "Process " << processes[i].pid << ": Waiting Time = " << waitingTime << endl;
        totalWaitingTime += waitingTime;
        waitingTime += processes[i].burstTime;
    }
    cout << "Average Waiting Time: " << (double)totalWaitingTime / n << endl;
}
void ljfScheduling(vector<Process> processes) {
    cout << "\nLJF Scheduling:" << endl;
    sort(processes.begin(), processes.end(), compareBurstTimeLJF);
    int n = processes.size();
    int waitingTime = 0;
    int totalWaitingTime = 0;
    for (int i = 0; i < n; ++i) {
        cout << "Process " << processes[i].pid << ": Waiting Time = " << waitingTime << endl;
        totalWaitingTime += waitingTime;
        waitingTime += processes[i].burstTime;
    }
    cout << "Average Waiting Time: " << (double)totalWaitingTime / n << endl;
}
void lrtfScheduling(vector<Process> processes) {
    cout << "\nLRTF Scheduling:" << endl;
    int n = processes.size();
    int completed = 0;
    int time = 0;
    int maxm = -1;
    int longest = 0;
    bool check = false;
    vector<int> remainingTime(n);
    vector<int> waitingTimes(n, 0);
    for (int i = 0; i < n; ++i) {
        remainingTime[i] = processes[i].burstTime;
    }
    while (completed != n) {
        for (int j = 0; j < n; j++) {
            if ((processes[j].arrivalTime <= time) &&
                (remainingTime[j] > maxm) && remainingTime[j] > 0) {
                maxm = remainingTime[j];
                longest = j;
                check = true;
            }
        }
        if (!check) {
            time++;
            continue;
        }
        remainingTime[longest]--;
        maxm = remainingTime[longest];
        if (maxm == 0) maxm = -1;
        if (remainingTime[longest] == 0) {
            completed++;
            check = false;
            int finishTime = time + 1;
            int waitingTime = finishTime - processes[longest].burstTime - processes[longest].arrivalTime;
            if (waitingTime < 0) waitingTime = 0;
            waitingTimes[longest] = waitingTime;
            cout << "Process " << processes[longest].pid << ": Waiting Time = " << waitingTime << endl;
        }
        time++;
    }
    int totalWaitingTime = 0;
    for (int i = 0; i < n; ++i) {
        totalWaitingTime += waitingTimes[i];
    }
    cout << "Average Waiting Time: " << (double)totalWaitingTime / n << endl;
}
int main() {
    vector<Process> processes = {
        {1, 6, 2, 0},
        {2, 8, 1, 0},
        {3, 7, 3, 0},
        {4, 3, 4, 0}
    };
    priorityScheduling(processes);
    ljfScheduling(processes);
    lrtfScheduling(processes);
    return 0;
}