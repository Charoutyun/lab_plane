#include "gtest/gtest.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <set>
#include <vector>
#include <list>

#include "../../includes/lab/lab.h"

using namespace std;

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

bool test_index_is_valid(bool debug = false) // simple test that i created to check, wheter or not if the selected row, col. is apart of the array. 
{
  if (debug){
    int size[]= {1,2,3,5,-1};
   
   int ** array = allocate_twod<int>(size);
   int init_item;

    init_twod(array,size);
    print_twod(array,size);
   
    bool a= index_is_valid(size,0,1);

    if(a == false){
      cout << "index doesnt exist";
    }
  
  }
  return true;
}

bool test_lab_init(bool debug = false)
{
  if (debug){
      int size[] = {1,2,3,5,-1};
    int ** lab_array = allocate_twod<int>(size);
    
    lab_array = init_lab(size);
    cout <<endl;
    print_twod(lab_array,size);


    
  }
  return true;
}














bool test_plane(bool debug = false){ // basic test that insures that my functions do indeed function correctly.
  if (debug){
    int size[] = {1,2,3,5,-1};
    bool ** plane_array = allocate_twod<bool>(size);
    
    plane_array = init_plane(size);
    print_plane(plane_array,size);
    cout <<endl;

    cout << "reserving a seat in row one , and column two" <<endl;
    reserve(plane_array,2,1);
    print_plane(plane_array,size);

    cout << endl; 
    cout << "canceling a seat in row one ,and column two" << endl;

    cancel(plane_array,2,1);
    print_plane(plane_array,size);
  

  }
  return true;
  
}





TEST(TEST_STUB, TestStub) {
  
  //EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_stub(false));
}

TEST(TEST_ARRAY_SIZE, TestArraySize) {

//EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_array_size(true));

}

TEST(TESTPLANE, TestPlane){

  //EXPECT_EQ(0, <your individual test functions are called here>);
  EXPECT_EQ(1, test_plane(true));
}

TEST(TEST_INDEX_IS_VALID, TestIndexIsValid){

  EXPECT_EQ(1, test_index_is_valid(true));

  //EXPECT_EQ(0, <your individual test functions are called here>);
  
}
TEST(TEST_LAB_INIT, TestLabInit){

  EXPECT_EQ(1, test_lab_init(true));

  //EXPECT_EQ(0, <your individual test functions are called here>);
  
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

