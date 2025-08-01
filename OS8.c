#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
#define HEAD 30
#define DISK_SIZE 100
int requests[SIZE] = {15, 35, 25, 45, 5, 50};
void FCFS() {
    int seek_sequence[SIZE], seek_count = 0, current = HEAD;
    for (int i = 0; i < SIZE; i++) {
        seek_count += abs(requests[i] - current);
        seek_sequence[i] = requests[i];
        current = requests[i];
    }
    printf("FCFS Seek Count: %d\n", seek_count);
}
void SSTF() {
    int seek_sequence[SIZE], seek_count = 0, current = HEAD, completed[SIZE] = {0};
    for (int i = 0; i < SIZE; i++) {
        int closest = -1, min_dist = DISK_SIZE;
        for (int j = 0; j < SIZE; j++) {
            if (!completed[j] && abs(requests[j] - current) < min_dist) {
                min_dist = abs(requests[j] - current);
                closest = j;
            }
        }
        seek_count += min_dist;
        seek_sequence[i] = requests[closest];
        completed[closest] = 1;
        current = requests[closest];
    }
    printf("SSTF Seek Count: %d\n", seek_count);
}
void SCAN() {
    int seek_sequence[SIZE + 1], seek_count = 0, current = HEAD;
    int direction = 1;
    int temp[SIZE + 1], idx = 0;
    for (int i = 0; i < SIZE; i++) temp[i] = requests[i];
    temp[SIZE] = HEAD;
    int temp_size = SIZE + 1;
    for (int i = 0; i < temp_size - 1; i++)
        for (int j = i + 1; j < temp_size; j++)
            if (temp[i] > temp[j]) { int t = temp[i]; temp[i] = temp[j]; temp[j] = t; }
    int start = 0;
    for (int i = 0; i < temp_size; i++)
        if (temp[i] == HEAD) { start = i; break; }
    if (direction == 1) {
        for (int i = start; i < temp_size; i++) seek_sequence[idx++] = temp[i];
        seek_sequence[idx++] = DISK_SIZE - 1;
        for (int i = start - 1; i >= 0; i--) seek_sequence[idx++] = temp[i];
    } else {
        for (int i = start; i >= 0; i--) seek_sequence[idx++] = temp[i];
        seek_sequence[idx++] = 0;
        for (int i = start + 1; i < temp_size; i++) seek_sequence[idx++] = temp[i];
    }
    for (int i = 1; i < idx; i++) seek_count += abs(seek_sequence[i] - seek_sequence[i - 1]);
    printf("SCAN Seek Count: %d\n", seek_count);
}
void LOOK() {
    int seek_sequence[SIZE], seek_count = 0, current = HEAD;
    int temp[SIZE], idx = 0;
    for (int i = 0; i < SIZE; i++) temp[i] = requests[i];
    for (int i = 0; i < SIZE - 1; i++)
        for (int j = i + 1; j < SIZE; j++)
            if (temp[i] > temp[j]) { int t = temp[i]; temp[i] = temp[j]; temp[j] = t; }
    int start = 0;
    for (int i = 0; i < SIZE; i++)
        if (temp[i] == HEAD || temp[i] > HEAD) { start = i; break; }
    for (int i = start; i < SIZE; i++) seek_sequence[idx++] = temp[i];
    for (int i = start - 1; i >= 0; i--) seek_sequence[idx++] = temp[i];
    for (int i = 1; i < idx; i++) seek_count += abs(seek_sequence[i] - seek_sequence[i - 1]);
    printf("LOOK Seek Count: %d\n", seek_count);
}
void CSCAN() {
    int seek_sequence[SIZE + 2], seek_count = 0, current = HEAD;
    int temp[SIZE + 1], idx = 0;
    for (int i = 0; i < SIZE; i++) temp[i] = requests[i];
    temp[SIZE] = HEAD;
    int temp_size = SIZE + 1;
    for (int i = 0; i < temp_size - 1; i++)
        for (int j = i + 1; j < temp_size; j++)
            if (temp[i] > temp[j]) { int t = temp[i]; temp[i] = temp[j]; temp[j] = t; }
    int start = 0;
    for (int i = 0; i < temp_size; i++)
        if (temp[i] == HEAD) { start = i; break; }
    for (int i = start; i < temp_size; i++) seek_sequence[idx++] = temp[i];
    seek_sequence[idx++] = DISK_SIZE - 1;
    seek_sequence[idx++] = 0;
    for (int i = 0; i < start; i++) seek_sequence[idx++] = temp[i];
    for (int i = 1; i < idx; i++) seek_count += abs(seek_sequence[i] - seek_sequence[i - 1]);
    printf("CSCAN Seek Count: %d\n", seek_count);
}
void CLOOK() {
    int seek_sequence[SIZE], seek_count = 0, current = HEAD;
    int temp[SIZE], idx = 0;
    for (int i = 0; i < SIZE; i++) temp[i] = requests[i];
    for (int i = 0; i < SIZE - 1; i++)
        for (int j = i + 1; j < SIZE; j++)
            if (temp[i] > temp[j]) { int t = temp[i]; temp[i] = temp[j]; temp[j] = t; }
    int start = 0;
    for (int i = 0; i < SIZE; i++)
        if (temp[i] == HEAD || temp[i] > HEAD) { start = i; break; }
    for (int i = start; i < SIZE; i++) seek_sequence[idx++] = temp[i];
    for (int i = 0; i < start; i++) seek_sequence[idx++] = temp[i];
    for (int i = 1; i < idx; i++) seek_count += abs(seek_sequence[i] - seek_sequence[i - 1]);
    printf("CLOOK Seek Count: %d\n", seek_count);
}
int main() {
    FCFS();
    SSTF();
    SCAN();
    LOOK();
    CSCAN();
    CLOOK();
    return 0;
}