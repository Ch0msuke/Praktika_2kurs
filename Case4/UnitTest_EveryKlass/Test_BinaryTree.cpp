#include "gtest/gtest.h"
#include "binary_tree.h"

TEST(BinaryTreeTest, PushAndSearch) {
    BinaryTree tree;
    tree.push(10);
    tree.push(5);
    tree.push(15);
    EXPECT_TRUE(tree.search(10));
    EXPECT_TRUE(tree.search(5));
    EXPECT_TRUE(tree.search(15));
    EXPECT_FALSE(tree.search(20));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
