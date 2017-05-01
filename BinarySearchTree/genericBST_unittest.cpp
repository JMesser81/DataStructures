#include "genericBST.hpp"
#include "gtest/gtest.h"

namespace {

// The fixture for testing class BST.
class BSTTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.
      const int even_ints_array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
      const int odd_ints_array[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
      int empty_ints_array[] = {};


  BSTTest() {
    // You can do set-up work for each test here.
  }

  virtual ~BSTTest() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
    for (auto &i : even_ints_array)
    {
      test_even_ints_tree.insert(i);
    }

    for (auto &i : odd_ints_array)
    {
      test_odd_ints_tree.insert(i);
    }

  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
    test_even_ints_tree.clear();
    test_odd_ints_tree.clear();
    test_empty_ints_tree.clear();
  }

  // Objects declared here can be used by all tests in the test case for BST.
  BST<int> test_even_ints_tree;
  BST<int> test_odd_ints_tree;
  BST<int> test_empty_ints_tree;
     
};

TEST_F(BSTTest, search)
{
  int *found = test_even_ints_tree.search(1);
  EXPECT_TRUE(found == nullptr);

  found = test_even_ints_tree.search(6);
  EXPECT_TRUE(found != nullptr);
  EXPECT_EQ(6, *found);

  found = test_even_ints_tree.search(-3);
  EXPECT_TRUE(found == nullptr) << "-3 was found in the test_even_ints_tree";

  found = test_odd_ints_tree.search(10);
  EXPECT_TRUE(found == nullptr);

  found = test_odd_ints_tree.search(13);
  EXPECT_TRUE(found != nullptr);
  EXPECT_EQ(13, *found);
}

TEST_F(BSTTest, size)
{

}

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
