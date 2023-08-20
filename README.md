# Work Report

## Name: <ins> Haroutyun chamelian </ins>

## Features:

- Not Implemented:
  - everything has been implemented

<br><br>

- Implemented:
  - everything has been implemented 

<br><br>

- Partly implemented:
  everything has been implemented 

<br><br>

- Bugs
  - main.cpp sometimes goes into an infitinite loop when i log out;

<br><br>

# Reflections:

- first time working with double for loops and 2d arrays,still iffy on pointers but feel a lot more confident.

# **output**


<br/><br/>

# basic_test.cpp output:

<br/><br/><br/><br/>
<pre>
[==========] Running 3 tests from 2 test suites.
[----------] Global test environment set-up.    
[----------] 1 test from TWO_D_ARRAYS
[ RUN      ] TWO_D_ARRAYS.BasicTest  
   -1   -1   -1   -1
   -1   -1   -1   -1   -1
   -1   -1   -1
   -1   -1   -1   -1   -1   -1       


   -1   -1   -1    3
   -1   -1   -1   -1   14
   -1   -1   -1
   -1   31   -1   -1   -1   -1


[0][3]: 3
[1][4]: 14
[3][1]: 31
[3][4]: 34

found 33 at: [3][1]
td[3][4] is a valid location.
td[13][4] is NOT a valid location.
td[3][14] is NOT a valid location.
---- end test two d functions ----------
[       OK ] TWO_D_ARRAYS.BasicTest (9 ms)
[----------] 1 test from TWO_D_ARRAYS (9 ms total)

[----------] 2 tests from TEST_LAB_N_PLANE
[ RUN      ] TEST_LAB_N_PLANE.BasicTestLab
    0    0    0
    0    0    0    0
    0    0    0    0    0
    0
    0    0    0

================ test login() =====================

logging in lab: <<lab<<, station <<station<<:
    0    0    0
    0    0    0    0
    0 2121    0    0    0
    0
    0    0    0


logging in lab: <<lab<<, station <<station<<:
    0    0    0
    0    0    0    0
    0 2121    0    0    0
    0
    0    0 4242


logging in lab: <<lab<<, station <<station<<:
login() correctly refused to log in a new user into an already occupied station
    0    0    0
    0    0    0    0
    0 2121    0    0    0
    0
    0    0 4242

================ test login() =====================

logging out user : 6666
logout() correctly refused to log out a user who was not logged in.
    0    0    0
    0    0    0    0
    0 2121    0    0    0
    0
    0    0 4242


logging out user: 4242
    0    0    0
    0    0    0    0
    0 2121    0    0    0
    0
    0    0    0


Deallocating two-d array 'labs'


---------- D O N E ----------
[       OK ] TEST_LAB_N_PLANE.BasicTestLab (17 ms)
[ RUN      ] TEST_LAB_N_PLANE.BasicTestPlane
 X X X X
 X X X X
 X X X X
 X X X X
 X X X X
 X X X X
 X X X X



============ test reserve() =======================

reserved 1A([0][0]
 A X X X
 X X X X
 X X X X
 X X X X
 X X X X
 X X X X
 X X X X


reserved 4C([3][2]
 A X X X
 X X X X
 X X X X
 X X C X
 X X X X
 X X X X
 X X X X


reserved 7D([6][3]
 A X X X
 X X X X
 X X X X
 X X C X
 X X X X
 X X X X
 X X X D


reserved 7D([6][3]
   reserve() correctly refused to reserve an already occupied seat.
 A X X X
 X X X X
 X X X X
 X X C X
 X X X X
 X X X X
 X X X D



============ test cancel() =======================

cancelled 4D([3][3]
   cancel() correctly refused to cancel unoccupied seat.
 A X X X
 X X X X
 X X X X
 X X C X
 X X X X
 X X X X
 X X X D


cancelled 4C([3][2]
 A X X X
 X X X X
 X X X X
 X X X X
 X X X X
 X X X X
 X X X D


Deallocating two-d array 'plane'


---------- D O N E ----------
[       OK ] TEST_LAB_N_PLANE.BasicTestPlane (32 ms)
[----------] 2 tests from TEST_LAB_N_PLANE (51 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 2 test suites ran. (61 ms total)
[  PASSED  ] 3 tests.

# testB.cpp output:
<pre>
----------running testB.cpp---------


[==========] Running 16 tests from 16 test suites.
[----------] Global test environment set-up.
[----------] 1 test from TEST_STUB
[ RUN      ] TEST_STUB.TestStub
[       OK ] TEST_STUB.TestStub (0 ms)
[----------] 1 test from TEST_STUB (0 ms total)

[----------] 1 test from TEST_ARRAY_SIZE
[ RUN      ] TEST_ARRAY_SIZE.TestArraySize
[       OK ] TEST_ARRAY_SIZE.TestArraySize (0 ms)
[----------] 1 test from TEST_ARRAY_SIZE (0 ms total)

[----------] 1 test from test_print_array
[ RUN      ] test_print_array.TestPrintArray
[       OK ] test_print_array.TestPrintArray (0 ms)
[----------] 1 test from test_print_array (0 ms total)

[----------] 1 test from TESTPLANE
[ RUN      ] TESTPLANE.TestPlane
[       OK ] TESTPLANE.TestPlane (0 ms)
[----------] 1 test from TESTPLANE (0 ms total)

[----------] 1 test from TEST_INDEX_IS_VALID
[ RUN      ] TEST_INDEX_IS_VALID.TestIndexIsValid
[       OK ] TEST_INDEX_IS_VALID.TestIndexIsValid (0 ms)
[----------] 1 test from TEST_INDEX_IS_VALID (0 ms total)

[----------] 1 test from TEST_LAB_INIT
[ RUN      ] TEST_LAB_INIT.TestLabInit
[       OK ] TEST_LAB_INIT.TestLabInit (0 ms)
[----------] 1 test from TEST_LAB_INIT (0 ms total)

[----------] 1 test from TEST_LOG_IN
[ RUN      ] TEST_LOG_IN.TestLogIn
[       OK ] TEST_LOG_IN.TestLogIn (0 ms)
[----------] 1 test from TEST_LOG_IN (0 ms total)

[----------] 1 test from TEST_LOG_OUT
[ RUN      ] TEST_LOG_OUT.TestLogOut
[       OK ] TEST_LOG_OUT.TestLogOut (0 ms)
[----------] 1 test from TEST_LOG_OUT (0 ms total)

[----------] 1 test from TEST_ALLOCATE_TWOD
[ RUN      ] TEST_ALLOCATE_TWOD.TestAllocateTwod
[       OK ] TEST_ALLOCATE_TWOD.TestAllocateTwod (0 ms)
[----------] 1 test from TEST_ALLOCATE_TWOD (0 ms total)

[----------] 1 test from TEST_DEALLOCATE_TWOD
[ RUN      ] TEST_DEALLOCATE_TWOD.TestDeallocateTwod
[       OK ] TEST_DEALLOCATE_TWOD.TestDeallocateTwod (0 ms)
[----------] 1 test from TEST_DEALLOCATE_TWOD (0 ms total)

[----------] 1 test from TEST_READ_TWOD
[ RUN      ] TEST_READ_TWOD.TestReadTwod
[       OK ] TEST_READ_TWOD.TestReadTwod (0 ms)
[----------] 1 test from TEST_READ_TWOD (0 ms total)

[----------] 1 test from TEST_WRITE_TWOD
[ RUN      ] TEST_WRITE_TWOD.TestWriteTwod
[       OK ] TEST_WRITE_TWOD.TestWriteTwod (0 ms)
[----------] 1 test from TEST_WRITE_TWOD (0 ms total)

[----------] 1 test from TEST_GET_TWOD
[ RUN      ] TEST_GET_TWOD.TestGetTwod
[       OK ] TEST_GET_TWOD.TestGetTwod (0 ms)
[----------] 1 test from TEST_GET_TWOD (0 ms total)

[----------] 1 test from TEST_INIT_TWOD
[ RUN      ] TEST_INIT_TWOD.TestInitTwod
[       OK ] TEST_INIT_TWOD.TestInitTwod (0 ms)
[----------] 1 test from TEST_INIT_TWOD (0 ms total)

[----------] 1 test from TEST_SEARCH_TWOD_TEMPLATED
[ RUN      ] TEST_SEARCH_TWOD_TEMPLATED.TestSearchTwodTemplated
[       OK ] TEST_SEARCH_TWOD_TEMPLATED.TestSearchTwodTemplated (0 ms)
[----------] 1 test from TEST_SEARCH_TWOD_TEMPLATED (0 ms total)

[----------] 1 test from TEST_PRINT_TWOD
[ RUN      ] TEST_PRINT_TWOD.TestPrintTwod
[       OK ] TEST_PRINT_TWOD.TestPrintTwod (0 ms)
[----------] 1 test from TEST_PRINT_TWOD (0 ms total)

[----------] Global test environment tear-down
[==========] 16 tests from 16 test suites ran. (15 ms total)
[  PASSED  ] 16 tests.
PS C:\Users\Harout\Desktop\projects\lab_and_plane\build>
</pre>
