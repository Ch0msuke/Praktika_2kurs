#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <vector>

class Queue {
public:
    void push(int value); // Добавить элемент в очередь
    int pop();           // Извлечь элемент из очереди
    bool isEmpty() const; // Проверка, пустая ли очередь

private:
    std::vector<int> data;
};

#endif // QUEUE_H
