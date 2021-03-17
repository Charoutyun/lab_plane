
#include "plane.h"                        // 7 rows , 4 columns.

// ----- plane functions. 

bool ** init_plane(){ // creates and fills the array with 0s 

    int rows[] = {4, 4, 4, 4, 4, 4, 4, -1};
    bool** plane = allocate_twod<bool>(rows);
    init_twod(plane, rows, false);
    return plane;

}

//@brief, goes through the planes rows and col (7,4) then looks for the reserved seat and adds the character A then adds the cols index to change a to the write char, then goes through the rest of the array and sets everything to x. 
ostream& print_plane(bool **plane, ostream& outs) { 
    bool ** row = plane;
    bool * col;
    for (int i = 0; i < 7; i++){
        col = *row;
        for(int j = 0; j < 4; j++){
            if(* col == true){
            outs << setw(2) << char('A' + j);
            }else{
            outs <<setw(2) << 'X';
            }
            col++;
            
        }
        outs <<endl;
        row++;
    
    }
    outs <<endl;
 
    return outs;
}     // prints out the 2d array 
  
  




bool reserve(bool** plane, int row, int seat){   // almost like the log in function but instead writes a one if someone is "logging/reserving" the seat 
    int checking_if_valid = read_twod(plane, row, seat);  
  
     if (checking_if_valid == false){
         write_twod(plane, row, seat, true);
     }
     return false;



}
// same as reserve but instead searches for ones and writes 0's 
bool cancel(bool** plane, int row, int seat){
    int checking_if_valid = read_twod(plane, row, seat);  
  
     if (checking_if_valid == true){
         write_twod(plane, row, seat, false);
     }
     return false;



}