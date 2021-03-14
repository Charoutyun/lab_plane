#include <iostream>
#include <iomanip>

#include "includes/lab/lab.h"

using namespace std;
void test_lab();
int main(int argv, char** argc) {
    test_lab();
    cout << "\n\n\n=====================" << endl;
    return 0;
}


void test_lab(){
    int lab_sizes[] = {4,3,2,-1};
    int** labs = init_lab(lab_sizes);
    cout << "before print_two \n";
    print_twod(labs, lab_sizes);

    int id = 0;
    int lab = 0;
    int station = 0;
    char command;

    
    cout<<"log[i]n    log[o]ut      e[x]it"<<endl;
    cout<<":"; cin>>command;
    while(toupper(command) != 'X'){
        switch(toupper(command)){
        case 'I':
            cout<<"---- LOG IN: ------"<<endl;
            cout<<"labs: ";
            print_array(lab_sizes);
            cout<<endl;

            cout<<"id: "; cin>>id;
            cout<<"lab: "; cin>>lab;
            cout<<"station: "; cin>>station;
            if (index_is_valid(lab_sizes, lab, station)){
                if (login(labs, lab, station,id)){
                    cout<<"you are logged in in lab "<<lab<<
                          ", station: "<<station<<endl;
                }
                else{
                    cout<<"lab "<<lab<<", station "<<station<<" is occupied"<<endl;
                }
            } //valid index
            else{
                cout<<"["<<lab<<"]["<<station<<"] is invalid. "<<endl;
            }
            break;

        case 'O':
            cout <<"----- LOGOUT ------" << endl;
            cout <<"labs: ";
            print_array(lab_sizes);
            cout <<endl;
            
            cout<<"id: "; cin>>id;
            if(logout(labs,lab_sizes, id)){
                cout << "you have been succesfully logged out of the system ";
                cout << endl;
                
            } else{
                cout << " you arent logged in";
                
            }
            break;

            default: 
        
            break;


        } //switch
        print_twod(labs, lab_sizes);

        cout<<"log[i]n    log[o]ut      e[x]it"<<endl;
        cout<<":"; cin>>command;
    }//while
}



