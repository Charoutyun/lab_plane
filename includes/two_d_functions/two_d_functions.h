#ifndef _TWO_D
#define _TWO_D

using namespace std;
#include <iostream>
#include <iomanip>



//-------2d array funcs
int array_size(int* sizes);
void print_array(int* a);
bool index_is_valid(int* sizes, int row, int col);



//To call: int** p = allocate_twod<int>(sizes_array)   -Thank you Travis!
template <class T>
T** allocate_twod(int* sizes); 

template <class T>
T** deallocate_twod(T** td, int rows); //rows is the number of rows. Always returns nullptr;//!!!CHANGE LATER ONCE PROF UPLOADS THIS DECLARATION TO CANVAS!!!

template <class T>
T read_twod(T** twod, int row, int col);

template <class T>
void write_twod(T** twod, int row, int col, const T& item);

template <class T>
T& get_twod(T** twod, int row, int col);

template<class T>
void init_twod(T** twod, int* sizes, T init_item = T());

template<class T>
bool search_twod(T** twod, int* sizes, const T& key, int& row, int& col);

//return a pointer to the item if found, nullptr if not found: 
//                                                 (Ms. Barskhian)
template<class T> 
T* search_twod(T** twod, int* sizes, const T& key); 

template <class T>
ostream& print_twod(T** twod, int* sizes, ostream& outs = cout);



template <class T>
T** allocate_twod(int* sizes) // creates an array which then its self holds arrays which indexes have the amount of sizes. 
{
    int size = array_size(sizes);
    T** two_d = new T*[size];
    T** walker_twod = two_d;
    int * walker_sizes = sizes;
    for(int i = 0; i < size; i++){
        *walker_twod = new T[*walker_sizes];
        walker_twod ++;
        walker_sizes++;
    }

    return two_d;

    
}

template <class T>
T** deallocate_twod(T** td, int rows) //rows is the number of rows. Always returns nullptr //
// deletes dynamic arrays.
{

 T ** walker_row = td;
    for(int i = 0; i < rows; i++){
        delete[] *walker_row;
        walker_row ++;
    }
    delete[] td;
    return nullptr;
}

template <class T>
T read_twod(T** twod, int row, int col) // goes to the defined row and col, then sets its self to the value found in the wanted row and col.
{
   T ** number_row = twod + row;
   T * number_col = *number_row + col;
    

    return * number_col;
}

template <class T>
void write_twod(T** twod, int row, int col, const T& item) // can write a number in the chosen col and row 
{
  T ** number_row = twod + row;
   T * number_col = *number_row + col;
    *number_col = item;
    
}
// at brief can both read and write either a value or read a value 
template <class T>
T& get_twod(T** twod, int row, int col)   
{
    T ** number_row = twod + row;
   T * number_col = *number_row + col;
    return * number_col;
}
// at brief goes through a two d array then goes into the 1d arrays and changes the value of all the elements to init_item
template<class T>
void init_twod(T** twod, int* sizes, T init_item) 
{
    T** row = twod;
    T* col = *twod;
    int size = array_size(sizes);
    int * walker = sizes;
    for (int i = 0; i <size; i++){
        col = *row;
        for(int j =0; j < *walker; j++){
            * col = init_item;
            col ++;
        }
        row++;
        walker++;
    }
    
}   

template<class T>
bool search_twod(T** twod, int* sizes, const T& key, int& row, int& col) // goes through the two d array , then looks for the wanted key in the row and col specified, if it finds it it will return true, if it doesnt it will return false. 
{
     T ** number_row = twod;
    T * number_col = *number_row;
    int size = array_size(sizes);
    T * walker = sizes;
    for (int i = 0; i <size; i++){
         number_col = *number_row;
        
        for(int j =0; j < *walker; j++){
            if(* number_col == key){
                row = number_row - twod;
                col = number_col - *number_row;

                return true;
            }
            
            ++number_col;
        }
        number_row ++;
        walker++;
    }


    return false;
}

//return a pointer to the item if found, nullptr if not found: 
//                                                 (Ms. Barskhian)
template<class T> 
T* search_twod(T** twod, int* sizes, const T& key)
{
     T ** number_row = twod;
    T * number_col = *number_row;
    int size = array_size(sizes);
    T * walker = sizes;
    for (int i = 0; i <size; i++){
         number_col = *number_row;
        
        for(int j =0; j < *walker; j++){
            if(* number_col == key){

                return number_col;
            }
            ++number_col;
        }
        number_row ++;
        walker++;
    }
    return nullptr;
}

template <class T>
ostream& print_twod(T** twod, int* sizes, ostream& outs)
{
    T** row = twod;
    T* col;
    int size = array_size(sizes);
    int * walker = sizes;
    for (int i = 0; i <size; i++){
        col = *row;
        for(int j =0; j < *walker; j++){
            outs << setw(5) << * col;
            col ++;
        }
        outs <<endl;
        row++;
        walker++;
    }
    outs <<endl;
 
    return outs;
}





#endif