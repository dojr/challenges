#include "headers/element.h"
#include <iostream>
int Element::removeElement(std::vector<int>& nums, int val) {

      for (int i = 0; i < nums.size()+1; i++){
        if (nums[i]==val){
          nums.erase(nums.begin()+i);
        }
      }
      return nums.size();
}
