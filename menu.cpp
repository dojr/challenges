#include "challenges.h"
#include <iostream>

int main(){
  Challenges challenges;
  int num;
  std::cout << "Enter challenge number: ";
  std:: cin >> num;

  switch (num) {
    case 1 :

    std::cout << challenges.romanToInt("MXXX") << std::endl;
    break;

    case 2 :  {

      std::vector<int>nums;
      nums.push_back(3);
      nums.push_back(2);
      nums.push_back(2);
      nums.push_back(3);
      int length = challenges.removeElement(nums,3);
      for(int i=0;i<length;i++){
        std::cout << nums.at(i) << std::endl;
      }
      break;
    }
  }

}
