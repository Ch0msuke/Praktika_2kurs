#include "binary_tree.h"

void BinaryTree::insert(TreeNode*& node, int value) {
    if (node == nullptr) {
        node = new TreeNode(value);
    } else if (value < node->value) {
        insert(node->left, value);
    } else {
        insert(node->right, value);
    }
}

void BinaryTree::push(int value) {
    insert(root, value);
}

bool BinaryTree::find(TreeNode* node, int value) {
    if (node == nullptr) {
        return false;
    }
    if (node->value == value) {
        return true;
    }
    if (value < node->value) {
        return find(node->left, value);
    } else {
        return find(node->right, value);
    }
}

bool BinaryTree::search(int value) {
    return find(root, value);
}
