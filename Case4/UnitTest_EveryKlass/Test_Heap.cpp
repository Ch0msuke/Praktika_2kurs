#include "gtest/gtest.h"
#include "heap.h"

TEST(HeapTest, PushAndPop) {
    Heap h;
    h.push(10);
    h.push(20);
    h.push(5);
    EXPECT_EQ(h.pop(), 20);
    EXPECT_EQ(h.pop(), 10);
    EXPECT_EQ(h.pop(), 5);
    EXPECT_TRUE(h.isEmpty());
}

TEST(HeapTest, PopFromEmptyHeap) {
    Heap h;
    EXPECT_THROW(h.pop(), std::runtime_error);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
