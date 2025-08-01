#include <iostream>
#include <thread>
#include <semaphore.h>
#include <vector>
#include <chrono>
const int BUFFER_SIZE = 5;
std::vector<int> buffer(BUFFER_SIZE);
int in = 0;
int out = 0;
sem_t emptySlots;
sem_t fullSlots;
std::mutex mtx;
void producer() {
    int item = 0;
    while (true) {
        item++;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        sem_wait(&emptySlots);
        {
            std::lock_guard<std::mutex> lock(mtx);
            buffer[in] = item;
            in = (in + 1) % BUFFER_SIZE;
        }
        sem_post(&fullSlots);
    }
}
void consumer() {
    while (true) {
        sem_wait(&fullSlots);
        int item;
        {
            std::lock_guard<std::mutex> lock(mtx);
            item = buffer[out];
            out = (out + 1) % BUFFER_SIZE;
        }
        sem_post(&emptySlots);
        std::cout << "Consumed: " << item << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    }
}
int main() {
    sem_init(&emptySlots, 0, BUFFER_SIZE);
    sem_init(&fullSlots, 0, 0);
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);
    producerThread.join();
    consumerThread.join();
    sem_destroy(&emptySlots);
    sem_destroy(&fullSlots);
    return 0;
}