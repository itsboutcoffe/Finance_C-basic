#include "spending.h"

void Search::searchData()
{
  std::fstream fout;
  Spending s;
  int flag = 0;
  std::cout << "Enter the ID you want to search";
  std::cin >> r;
  fout.open(_File_name,std::ios::in|std::ios::binary);
  while (fout.read((char*)&s,sizeof(s))) {
    if(s.check_id(r))
    {
      s.ShowInfoType();
      s.output();
      flag++;
    }
  }
  
  (flag==0)?(std::cout << "No such number found") : (std::cout << "Details Found !!!!");
}
