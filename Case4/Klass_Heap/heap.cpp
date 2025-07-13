#include "heap.h"

void Heap::push(int value) {
    data.push_back(value);
    std::push_heap(data.begin(), data.end());
}

int Heap::pop() {
    if (isEmpty()) {
        throw std::runtime_error("Heap is empty");
    }
    std::pop_heap(data.begin(), data.end());
    int max = data.back();
    data.pop_back();
    return max;
}

bool Heap::isEmpty() const {
    return data.empty();
}
