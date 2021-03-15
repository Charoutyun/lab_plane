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


bool test_array_size(bool debug = false) // test which creates an array then counts how many cells there are then compares its self to a check i made.
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

bool test_print_array(bool debug = false){
if (debug){
    int a[6]={1,2,3,-1};
    int * array = a;  
    print_array(array);

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

bool test_lab_init(bool debug = false) // checking if init lab initializes with 0's correctly
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

bool test_login(bool debug = false) // simple test which logs in an id at lab 2 station 0,
{
  if (debug){
     int size[] = {1,2,3,5,-1};
    int ** lab_array = allocate_twod<int>(size);

    lab_array = init_lab(size);
    cout <<endl;
    print_twod(lab_array,size);
    login(lab_array,2,0,222);
    cout << endl;
    print_twod(lab_array,size);
    
  }
  return true;
}


bool test_logout(bool debug = false) // simple test which logs in an id at lab 2 station 0, then tested out trying to log out,with an id that does not exist,then with one that does exist. 
{
  if (debug){
     int size[] = {1,2,3,5,-1};
    int ** lab_array = allocate_twod<int>(size);

    lab_array = init_lab(size);
    cout <<endl;
    print_twod(lab_array,size);
    login(lab_array,2,0,222);
    cout << endl;
    print_twod(lab_array,size);
    cout << endl;
    cout << " logging out now ";
    logout(lab_array,size,111);
    cout << endl;
    print_twod(lab_array,size);
    cout << endl;
    logout(lab_array,size,222);
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



bool test_allocate_twod(bool debug = false){ // creating an array with different sizez to see if allocate allocates correctly

  if (debug){
     int size[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(size);

    print_twod(array,size);
  
  }
  return true;
}

bool test_deallocate_twod(bool debug = false){ // deallocating the array.

  if (debug){
     int sizes[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(sizes);

    int size = array_size(sizes);
    print_twod(array,sizes);

    deallocate_twod(array,size);
   

    
  }
  return true;
}


bool test_read_twod(bool debug = false){ // creating an array, init the array then im writing a value, i read that value and i compare it in an f statement. if that value is not found then it returns false 

  if (debug){
     int sizes[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(sizes);

    init_twod(array,sizes,3);
    cout << endl;
    print_twod(array,sizes);
    write_twod(array,0,2,99);
    print_twod(array,sizes);

    int row;
    int col;
  
    cout <<read_twod(array,0,2);
    if (read_twod(array,0,2) != 99){
      return false;
    }

  }
  return true;
}


bool test_write_twod(bool debug = false){ // same test as above. because this tests does test both write twod and read..

  if (debug){
     int sizes[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(sizes);

    init_twod(array,sizes,3);
    cout << endl;
    print_twod(array,sizes);
    write_twod(array,0,2,99);
    print_twod(array,sizes);

    int row;
    int col;
  
    cout <<read_twod(array,0,2);
    if (read_twod(array,0,2) != 99){
      return false;
    }

  }
  return true;
}


bool test_get_twod(bool debug = false){ // same test as above. but now using get_twod in my if statment instead, to check if get is working correctly.


  if (debug){
     int sizes[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(sizes);

    init_twod(array,sizes,3);
    cout << endl;
    print_twod(array,sizes);
    write_twod(array,0,2,99);
    print_twod(array,sizes);

    int row;
    int col;
  
    cout <<get_twod(array,0,2);
    if (get_twod(array,0,2) != 99){
      return false;
    }

  }
  return true;
}

bool test_init_twod(bool debug = false){ // simple test that creates an array then, fills it with threes

  if (debug){
     int sizes[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(sizes);

    init_twod(array,sizes,3);
    cout << endl;
    print_twod(array,sizes);
    }

  
  return true;
}

bool test_search_twod(bool debug = false){ // simple test that creates an array then, i have a id inputed in the array and use a simple search function to go through the array, then goes into an if statment if it finds it says it founds it and if not says doesnt find it 
  if (debug){
     int sizes[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(sizes);

    init_twod(array,sizes,3);
    cout << endl;
    print_twod(array,sizes);
    write_twod(array,0,2,99);
    int row = 0;
    int col =1;
    if ( search_twod (array, sizes,99,row,col)  == 1 ){
      cout << "found 99 in row " << row << " and col " << col;
    } else {
      cout << "did not find 99";
    }
    }

  
  return true;
}

bool test_search_twod_templated(bool debug = false){ // simple test that creates an array then, i have a id inputed in the array and use a simple search function to go through the array, then goes into an if statment if it finds it says it founds it and if not says doesnt find it 

  if (debug){
     int sizes[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(sizes);

    init_twod(array,sizes,3);
    cout << endl;
    print_twod(array,sizes);
    write_twod(array,2,1,55);
    print_twod(array,sizes);
  
    if ( search_twod (array, sizes,55)  != nullptr  ){
      cout << "found 55 "; 
    } else {
      cout << "did not find 55";
    }
    }

  
  return true;
}

bool test_print_twod(bool debug = false){

  if (debug){
     int size[] = {1,2,3,5,-1};
    int ** array = allocate_twod<int>(size);

    print_twod(array,size);
  
  }
  return true;
}












TEST(TEST_STUB, TestStub) {
  
  //EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_stub(false));
}

TEST(TEST_ARRAY_SIZE, TestArraySize) {

//EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_array_size(false));

}

TEST(test_print_array, TestPrintArray){

 
 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_print_array(false));
}

TEST(TESTPLANE, TestPlane){

  //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_plane(false));
}

TEST(TEST_INDEX_IS_VALID, TestIndexIsValid){

//EXPECT_EQ(0, <your individual test functions are called here>);
  
   EXPECT_EQ(1, test_index_is_valid(false));
}



TEST(TEST_LAB_INIT, TestLabInit){

  //EXPECT_EQ(0, <your individual test functions are called here>);

   EXPECT_EQ(1, test_lab_init(false));
}

TEST(TEST_LOG_IN, TestLogIn){

//EXPECT_EQ(0, <your individual test functions are called here>);
  
    EXPECT_EQ(1, test_login(false));

}


TEST(TEST_LOG_OUT, TestLogOut){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_logout(false));
}

TEST(TEST_ALLOCATE_TWOD, TestAllocateTwod){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_allocate_twod(false));
}

TEST(TEST_DEALLOCATE_TWOD, TestDeallocateTwod){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_deallocate_twod(false));
}

TEST(TEST_READ_TWOD, TestReadTwod){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_read_twod(false));
}

TEST(TEST_WRITE_TWOD, TestWriteTwod){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_write_twod(false));
}


TEST(TEST_GET_TWOD, TestGetTwod){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_get_twod(false));
}

TEST(TEST_INIT_TWOD, TestInitTwod){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_init_twod(false));
}

TEST(TEST_SEARCH_TWOD_TEMPLATED, TestSearchTwodTemplated){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_search_twod_templated(false));
}

TEST(TEST_PRINT_TWOD, TestPrintTwod){

 //EXPECT_EQ(0, <your individual test functions are called here>);
 
   EXPECT_EQ(1, test_print_twod(false));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

