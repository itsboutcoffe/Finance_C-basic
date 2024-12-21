#include "spending.h"

void Write::writeToFile()
{
  // Announcing the open of the program
  std::cout << "Write page opened!!!" << std::endl;
  
  Spending s; // Calling class "Spending"
  
  // Reading File name from the user
  std::cout << "Enter the file name:\t";
  std::cin >> _File_name;

  // Opening File for writing data or information
  std::fstream fout;
  fout.open(_File_name , std::ios::out | std::ios::app);
  
  /* Applying loop to take n number of input from user */
  int n;
  std::cout << "Enter the number of information you wanna add: " << std::endl;
  std::cin >> n;

  for(int i=0 ; i < n ; i++)
  {
    // Calling input funtion of class "Spending"
    s.input(); // Taking input through class Spending
    fout.write((char*)&s,sizeof(s)); // Stores data to respective opened file
  }
  fout.close(); // Closing File
}
