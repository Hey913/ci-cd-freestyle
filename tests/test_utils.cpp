#include <gtest/gtest.h>
#include utils.h

TEST(UtilsTest, PrintNumberTest) {
    testing::internal::CaptureStdout();
    print_number(5);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, The number is: 5n);
}

