//lab.cpp
//non-templated func definitions go here
#include "lab.h"


//----2D ARRAY FUNCTIONS
int array_size(int* sizes) // simple function that just checks how many arrays there are
{

int * walker =  sizes;    
int count = 0;
while (* walker != -1 ){
    walker ++;
    count ++;


}
return count;
}

void print_array(int* a) // prints out an array ** NOT A 2D ONE ***
{
    int  *walker = a;
    int size = array_size(a);
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << *a << "|";
        a ++;
    }
    cout << "]";
}


bool index_is_valid(int* sizes, int row, int col)  // checks if the row/col are indeed in the array then returns true if so and false if not 
{
  int how_many_rows = array_size(sizes);
  if(row < how_many_rows  && row > -1 ){
        int * value_of_row = sizes + row;
     
        if( col < * value_of_row ){
            return true;
        
        }
    }
    return false;
}


//----LAB FUNCTIONS               // created an array, then goes through each cell one by one and fills it with zeros.
int **init_lab(int* stations)
{
 int ** twod_array = allocate_twod<int>(stations);

    init_twod(twod_array,stations);

    return twod_array;

 
}

bool login(int** labs, int lab, int station, int id) // finds the location of the row and col that is inserted then writes the id there.
{
    int checking_if_valid = read_twod(labs, lab, station);
  
    if (checking_if_valid == false){
    write_twod(labs, lab, station, id);
    return true;
    }

    return false;
}

bool logout(int** labs, int* sizes, int id)   // doess almost the same as login but instead of searching for row and col it searches for the id its self then if it finds it, writes 0;
{
    int* checking_if_logged_in = search_twod(labs, sizes, id);
    if (checking_if_logged_in != nullptr){
        
        *checking_if_logged_in = false;
        
        return true;
          
    }
 return false;
}


// ----- plane functions.

bool ** init_plane(int* seats){ // creates and fills the array with 0s 

    bool** twod_array = allocate_twod<bool>(seats);

    init_twod(twod_array,seats);

    return twod_array;

}

void print_plane(bool** plane,int* seats){      // prints out the 2d array 
    print_twod(plane,seats);
}

bool reserve(bool** plane, int row, int col){   // almost like the log in function but instead writes a one if someone is "logging/reserving" the seat 
    int checking_if_valid = read_twod(plane, row, col);  
  
     if (checking_if_valid == false){
         write_twod(plane, row, col, true);
     }
     return false;



}
// same as reserve but instead searches for ones and writes 0's 
bool cancel(bool** plane, int row, int col){
    int checking_if_valid = read_twod(plane, row, col);  
  
     if (checking_if_valid == true){
         write_twod(plane, row, col, false);
     }
     return false;



}

