#include<gtest/gtest.h>

#include "myAdd.hpp"

TEST(Add, Simple)
{
    EXPECT_EQ(my_add(2,2),4);
    EXPECT_EQ(my_add(3,2),my_add(2,3));
    EXPECT_EQ(my_add(-42,3),-3);
}
