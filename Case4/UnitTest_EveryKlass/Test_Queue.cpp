#include "gtest/gtest.h"
#include "queue.h"

TEST(QueueTest, PushAndPop) {
    Queue q;
    q.push(10);
    q.push(20);
    EXPECT_EQ(q.pop(), 10);
    EXPECT_EQ(q.pop(), 20);
    EXPECT_TRUE(q.isEmpty());
}

TEST(QueueTest, PopFromEmptyQueue) {
    Queue q;
    EXPECT_THROW(q.pop(), std::runtime_error);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
