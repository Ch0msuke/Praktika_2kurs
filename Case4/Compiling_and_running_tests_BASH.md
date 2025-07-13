# Компиляция и запуск Тестов
## test_queue

### Компиляция
```
g++ -std=c++11 -I/usr/include/gtest test_queue.cpp queue.cpp -lgtest -pthread -o test_queue
```
### Запуск
```
./test_queue
```
## test_heap

### Компиляция
```
g++ -std=c++11 -I/usr/include/gtest test_heap.cpp heap.cpp -lgtest -pthread -o test_heap
```
### Запуск
```
./test_heap
```
## test_binary_tree
### Компиляция
```
g++ -std=c++11 -I/usr/include/gtest test_binary_tree.cpp binary_tree.cpp -lgtest -pthread -o test_binary_tree
```
### Запуск
```
./test_binary_tree
```
