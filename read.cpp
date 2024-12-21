#include "spending.h"
#include <thread>
#include <ctime>
#include <chrono>
void Read::readFile()
{
  Spending s; // Calling class "Spending"

  // File reading process:
  std::cout << "Enter the name of the file: \t";
  std::cin >> _File_name;
  std::fstream fin;
  fin.open(_File_name , std::ios::in | std::ios::binary);
  
  /* Displaying Output*/
  s.ShowInfoType();

  // Reading data from the file
  while(fin.read((char*)&s,sizeof(s)))
  {
    /* Taking output from the inputed file from spending class */
    s.output();
  }
  
  // Closing File
  fin.close();
  
  // Putting dealy to look are the file
  std::this_thread::sleep_for(std::chrono::seconds(10));
  
  // Cleaning screen of Read program
  system("clear");
}
