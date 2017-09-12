/*
  Write a program that first asks for the number of items to be ID stamped. The program then loops
  as many times as the number that was input. For each loop pass, the program asks for a description
  and generates a unique integer to be the identifier of the item. The program then displays a message
  stating that the unique identifier for the given product it the generated number.

  Project #1
  Brendan Jackson
  09/05/2017
  CS216
*/


/*******************************************************************************

                              Standard Libraries

*******************************************************************************/

// contains definitions of cin, cout, endl, and input/output operators
#include <iostream>
// contains rand( ) and srand( ) for random number generation
#include <cstdlib>
// contains definition of type string
#include <string>
// contains definitions of time functions
#include <chrono>

//standard namespace
using namespace std;

/*******************************************************************************

                              Class prototype

*******************************************************************************/
class ID_stamp
{
  // class members that cannot be accessed directly
  private:
    // storage for items to be stamped
    int stampAmount;
    // variable named stamp of type integer
    int stamp;
    // variable name desc of type string for product description
    string desc;
  // class members that can be used freely within the class
  public:
    // prompts user for itemAmount and bootstraps the program.
    ID_stamp();
    // Loops through program
    void forEachStampAmount(int itemAmount);
    // Input data function that has no parameters and returns nothing. The function should display a
    // message prompting for input of a description string.
    void inputData(int i);
    // sets description of the stamp, reads keyboard input of a string (you may use getline( ) ).
    void setDescription();
    // sets unique ID of the stamp, Your program then extracts the current time using now( )
    // function of chrono. This is passed to the rand( ) function to generate an integer that will be
    // considered the unique identifier assigned to stamp.
    void setStampID();
    // Display data function that outputs both the entered string and the stamp to the screen with
    // description and formatting added.
    void displayData();
    // displays stamp description
    void getDescription();
    // displays stamp unique ID
    void getStampID();
};
