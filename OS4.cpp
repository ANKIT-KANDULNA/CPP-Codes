#include <iostream>
using namespace std;
int main() {
    const int P = 5, R = 3;
    int available[] = {3, 3, 2};
    int max[P][R] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
    int allocation[P][R] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
    int need[P][R], finish[P] = {0}, work[R], safeseq[P];

    for (int i = 0; i < R; i++){
        work[i] = available[i];
    }
    for (int i = 0; i < P; i++){
        for (int j = 0; j < R; j++){
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    int count = 0;
    while (count < P) {
        bool found = false;
        for (int p = 0; p < P; p++) {
            if (!finish[p]) {
                bool possible = true;
                for (int j = 0; j < R; j++)
                    if (need[p][j] > work[j]) {
                        possible = false;
                        break;
                    }
                if (possible) {
                    for (int j = 0; j < R; j++)
                        work[j] += allocation[p][j];
                    safeseq[count++] = p;
                    finish[p] = 1;
                    found = true;
                }
            }
        }
        if (!found) {
            cout << "System is not in a safe state.\n";
            return 0;
        }
    }
    cout << "System is in a safe state. Safe sequence: ";
    for (int i = 0; i < P; i++)
        cout << "P" << safeseq[i] << (i == P-1 ? "\n" : " -> ");
    return 0;
}