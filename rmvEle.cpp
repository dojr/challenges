#include "headers/element.h"
#include <iostream>
int Element::removeElement(std::vector<int>& nums, int val) {

  int count = 0;
  for (int i = 0; i < nums.size(); ++i){
    std::cout << "i: " << i << " " << "count: " << count << " ";
    if (nums[i] != val){
      nums[count++] = nums[i];
    }
  }
  std:: cout << std::endl;
  return count;
}
