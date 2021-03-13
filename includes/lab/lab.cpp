//lab.cpp
//non-templated func definitions go here
#include "lab.h"


//----2D ARRAY FUNCTIONS
int array_size(int* sizes)
{

int * walker =  sizes;
int count = 0;
while (* walker != -1 ){
    walker ++;
    count ++;


}
return count;
}

void print_array(int* a)
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


bool index_is_valid(int* sizes, int row, int col)
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


//----LAB FUNCTIONS
int **init_lab(int* stations)
{


 return nullptr;
}

bool login(int** labs, int lab, int station, int id)
{


 return true;
}

bool logout(int** labs, int* sizes, int id)
{


 return true;
}
