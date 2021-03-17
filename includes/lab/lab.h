#ifndef _LAB_H
#define _LAB_H

using namespace std;
#include <iostream>
#include <iomanip>

#include "../two_d_functions/two_d_functions.h"


//-------lab functions
int **init_lab(int* stations);
bool login(int** labs, int lab, int station, int id);
bool logout(int** labs, int* sizes, int id);








#endif