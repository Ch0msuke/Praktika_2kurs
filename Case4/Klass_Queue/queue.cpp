#include "queue.h"

void Queue::push(int value) {
    data.push_back(value);
}

int Queue::pop() {
    if (isEmpty()) {
        throw std::runtime_error("Queue is empty");
    }
    int front = data.front();
    data.erase(data.begin());
    return front;
}

bool Queue::isEmpty() const {
    return data.empty();
}
