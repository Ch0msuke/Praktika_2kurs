#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    void push(int value); // Добавить элемент в дерево
    bool search(int value); // Поиск элемента в дереве
    TreeNode* root;

    BinaryTree() : root(nullptr) {}

private:
    void insert(TreeNode*& node, int value);
    bool find(TreeNode* node, int value);
};

#endif // BINARY_TREE_H
