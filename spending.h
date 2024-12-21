/*
 * File: Spending.h
 *
 * Description: OOP in C++ is being used for this operation
 * */

#if !defined(SPENDING_H)
#define SPENDING_H

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include<fstream>

/*#define max 1000*/
// Declaration of Spending class
class Spending
{
  protected:
    char        _First_name[100], _Mid_name[100],_Last_name[100],  _org[100];
    long int    _id , _amount;
  public:
    virtual void input();
    void ShowInfoType();
    void output();
    long int getid();
    long int check_id(long int _phone_no);
};

class Write : public Spending
{
  protected:
    char _File_name[100];
  public:
    void writeToFile(void);
};

class Read : public Spending
{
  protected:
    char _File_name[100];
  public:
    void readFile(void);
};

class Delete:public Spending
{
  protected:
    char _File_name[100];
    long int _Did;
  public:
    void deleteFile();
};

class Search
{
  protected:
    long int r;
    char _File_name[100];
  public:
    void searchData();
};
#endif
