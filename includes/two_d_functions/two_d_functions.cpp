

#include "two_d_functions.h"

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
