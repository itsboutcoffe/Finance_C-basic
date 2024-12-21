#include "spending.h"

void Delete::deleteFile()
{
  Spending s;
  int flag = 0;   // Declaring flag to get bool results

  // Announcing the opening of delete program 
  std::cout << "To Delete File."          << std::endl;
  
  // Asking File name
  std::cout << "Enter the file name:\t";
  std::cin >> _File_name;

  //Asking phone no.
  std::cout << "Enter the phone no.:\t";
  std::cin  >> _Did;
  
  // Opening File from user
  std::fstream fin,fout;
  fin.open(_File_name,std::ios::in|std::ios::binary);
  fout.open("temp.txt",std::ios::out|std::ios::binary);

  
  while (fin.read((char*)&s,sizeof(s))) 
  {
    if(s.check_id(_Did))
    {
      flag++;
    }
    else {
      fout.write((char*)&s,sizeof(s));
    }
  }

  if(flag == 0)
  {
    std::cout << "ID not gound!!!!! \a \n";
  }
  else {
    std::cout << "Details has been removed!!!! \a \n";
  }
  fout.close();
  fin.close();
  remove(_File_name);
  rename("temp.txt",_File_name);
}
