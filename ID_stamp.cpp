#include "ID_stamp.h"

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


// Definitions of the member functions should be saved in a file called ID_stamp.cpp
// prompts user for itemAmount and bootstraps the program.
ID_stamp::ID_stamp(){
  // TODO UPDATE
  // Sets up the random seed based on epoch calendar
  srand(int(time(0)));

  cout << "\nHow many items will be ID stamped? \n";
  // TODO Data validation
  cin >> stampAmount;
  // bootstraps the rest of the program
  forEachStampAmount(stampAmount);
}

  // Loops through program
  void ID_stamp::forEachStampAmount(int stampAmount){
    for (int i = 0; i < stampAmount; i++){
      inputData(i + 1);
      setDescription();
      setStampID();
      displayData();
    }
  }

  // Input data function that has no parameters and returns nothing. The function should display a
  // message prompting for input of a description string.
  void ID_stamp::inputData(int i){
    cout << "\n Input a description for stamp #" << i << endl;
  }

  // sets description of the stamp, reads keyboard input of a string (you may use getline( ) ).
  void ID_stamp::setDescription(){
    // ignores linebreaks and everything that would enterfere with getline
    cin.ignore();
    getline(cin, desc);
  }

  // sets unique ID of the stamp, Your program then extracts the current time using now( )
  // function of chrono. This is passed to the rand( ) function to generate an integer that will be
  // considered the unique identifier assigned to stamp.
  void ID_stamp::setStampID(){

    auto current_time = chrono::system_clock::now();
    auto duration = current_time.time_since_epoch();
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    stamp = millis;

  }

  // Display data function that outputs both the entered string and the stamp to the screen with
  // description and formatting added.
  void ID_stamp::displayData(){
    getDescription();
    getStampID();
  }

  // displays stamp description
  void ID_stamp::getDescription(){
    cout << "\n The description is: " << desc << endl;
  }

  // displays stamp unique ID
  void ID_stamp::getStampID(){
    cout << "\n The stamp ID is: " << stamp << endl;
  }
