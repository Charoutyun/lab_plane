//lab.cpp
//non-templated func definitions go here
#include "lab.h"



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



