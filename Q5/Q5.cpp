#include "Dependencies/gtest/gtest.h"

// Include the header file that contains the ConcatRemove function
#include "Dependencies/Q4.h"

// Define a test fixture class
class ConcatRemoveTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Set up any necessary variables or objects for the tests
    }

    void TearDown() override {
        // Clean up any resources allocated in SetUp()
    }
};

// Define a test case
TEST_F(ConcatRemoveTest, Test1) {
    // Define the input for the test case
    std::string s = "bla bla bla bla";
    std::string t = "blablabcde";
    int k = 8;

    // Call the ConcatRemove function
    std::string result = ConcatRemove(s, t, k);

    // Check the result against the expected output
    EXPECT_EQ(result, "yes");
}

TEST_F(ConcatRemoveTest, Test2) {
    // Define the input for the test case
    std::string s = "tab";
    std::string t = "tab";
    int k = 7;

    // Call the ConcatRemove function
    std::string result = ConcatRemove(s, t, k);

    // Check the result against the expected output
    EXPECT_EQ(result, "yes");
}

// Run the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
