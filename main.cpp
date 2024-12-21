#include "spending.h"

int main()
{
  Write w;
  Read r;
  Delete d;
  Search se;
  int option;
  do {
    std::cout << "Enter any number from the following options:\n"
              << "0. Exit   \n"
              << "1. Write  \n"
              << "2. Read   \n"
              << "3. Delete \n"
              << "4. Search \n";
    std::cin >> option;
    switch(option)
    {
      case 0:
        system("clear");
        break;

      case 1:
        system("clear");
        w.writeToFile();
        break;

      case 2:
        system("clear");
        r.readFile();
        break;

      case 3:
        system("clear");
        d.deleteFile();
        break;

      case 4:
        system("clear");
        se.searchData();
        break;
      default:
        std::cout << "Select from the listed one:" << std::endl;
    }
  } while(option!=0);
  return 0;
}
