#ifndef _PLANE_H
#define _PLANE_H

using namespace std;
#include <iostream>
#include <iomanip>

#include "../two_d_functions/two_d_functions.h"


//====== plane functions 
bool ** init_plane();
ostream& print_plane(bool **plane, ostream& outs = cout);
bool reserve(bool** plane, int row, int seat);
bool cancel(bool** plane, int row, int seat);

#endif