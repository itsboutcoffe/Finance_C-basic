#include "spending.h"

void Spending::input()
{
  std::cout <<  "Enter First Name:\t"        ;
  std::cin  >>  _First_name                  ;
  
  std::cout <<  "Enter Mid Name:\t"           ;
  std::cin  >>  _Mid_name                     ;
  
  std::cout <<  "Enter Last Name:\t"          ;
  std::cin  >>  _Last_name                    ;
  
  std::cout << "Enter Organization name:"     ;
  std::cin >> _org                            ;

  std::cout <<  "Enter Esewa or Bank ID:\t"   ;
  std::cin >>   _id                           ;

  std::cout << "Enter the amount paid:"       ;
  std::cin >> _amount                         ;

  std::cout << "The given data has been stored in the file" << std::endl;    
}

void Spending::ShowInfoType()
{
  std::cout << std::left << std::setw(15) << "First Name"
                         << std::setw(15) << "Mid Name"
                         << std::setw(15) << "last Name"
                         << std::setw(15) << "esewa/bank id"
                         << std::setw(30) << "Organization"
                         << std::setw(15) << "amount"
                         << std::endl;
}
void Spending::output()
{
  std::cout << "-------------------------------"<<
    "-------------------------------------------"<<
    "-------------------------------------------"<< std::endl;
  std::cout << std::left << std::setw(15) << _First_name 
                    << std::setw(15) << _Mid_name 
                    << std::setw(15) << _Last_name
                    << std::setw(15) << _id
                    << std::setw(30) << _org
                    << std::setw(15) << _amount
                    << std::endl;
}

long int Spending::getid()
{
  return _id;
}

long int Spending::check_id(long int r)
{
  if(_id == r){return 1;}
  else{return 0;}
}
