
#ifndef VEGIE_H

#define VEGIE_H



// Include the required header files.

#include "animal.h"

#include<string>

using namespace std;



// Define the class.

class vegie :public animal {



private:



	// Declare the member variables.

	string favourite_food;

	static int nextID;



public:



	// Declare the constructor.

	vegie(string, int);



	// Declare the member functions.

	string get_favourite_food();

	void set_favourite_food(string n);

	string get_name();

};

#endif
