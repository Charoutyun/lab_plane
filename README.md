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
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from TEST_LAB_N_PLANE
[ RUN      ] TEST_LAB_N_PLANE.BasicTest
    0    0    0
    0    0    0    0
    0    0    0    0    0
    0
    0    0    0


logging in lab: 2, station 1:
    0    0    0
    0    0    0    0
    0 1234    0    0    0
    0
    0    0    0


write labs[0][2] <- 99:
    0    0   99
    0    0    0    0
    0 1234    0    0    0
    0
    0    0    0


get_twod(4,2) <- 33:
    0    0   99
    0    0    0    0
    0 1234    0    0    0
    0
    0    0   33


reading labs[4][2]: 33

get(0,2): 99

found 33 at: [4][2]

loggin out id: 1234
    0    0   99
    0    0    0    0
    0    0    0    0    0
    0
    0    0   33


Deallocating two-d array 'labs'


---------- D O N E ----------
[       OK ] TEST_LAB_N_PLANE.BasicTest (15 ms)
[----------] 1 test from TEST_LAB_N_PLANE (15 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (17 ms total)
[  PASSED  ] 1 test.
</pre>

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
