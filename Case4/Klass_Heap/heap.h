#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

class Heap {
public:
    void push(int value); // Добавить элемент в кучу
    int pop();           // Извлечь максимальный элемент из кучи
    bool isEmpty() const; // Проверка, пустая ли куча

private:
    std::vector<int> data;
};

#endif // HEAP_H
