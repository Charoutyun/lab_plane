#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
using namespace std;
 
#include "../../includes/lab/lab.h"

bool test_stub(bool debug = false)
{
  if (debug){
    cout << "testB:: test-sub() entering test_sub" << endl;
  }
  return true;
}


bool test_array_size(bool debug = false)
{
  if (debug){
    int a[6]={1,2,3,-1};
    int * array = a; 
    int size_value = array_size(array);
    int array_actual_size = 3;
    cout << endl;
    

    if(size_value != array_actual_size){
      cout << "expected size_vale to return " << array_actual_size << "but instead returned " << size_value;
    } else{
        cout << "Test passed: expected to find " << array_actual_size << " and succesfully found " << size_value;
    }

    
  }

 return true;
}

TEST(TEST_STUB, TestStub) {
  
  //EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_stub(false));
}

TEST(TEST_ARRAY_SIZE, TestArraySize) {

  EXPECT_EQ(1, test_array_size(true));

}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

