#include "headers/challenges.h"

int Challenges::romanToInt(std::string s){

	int roman = 0;

	for(unsigned int i=0;i<s.length();i++){
		char num,next;
		num = s[i];
		next = s[i+1];

		switch(num){
		case 'I' :
			if (next=='V'){
				roman+=4;
				i++;
				break;
			}
			else if (next=='X'){
				roman+=9;
				i++;
				break;
			}
			roman += 1;
			break;
		case 'V' :
			roman += 5;
			break;
		case 'X' :
			if (next=='L'){
				roman += 40;
				i++;
				break;
			}
			else if (next=='C'){
				roman += 90;
				i++;
				break;
			}
			roman = roman + 10;
			break;
		case 'L' :
			roman += 50;
			break;
		case 'C' :
			if (next == 'D'){
				roman += 400;
				i++;
				break;
			}
			else if (next == 'M'){
				roman += 900;
				i++;
				break;
			}
			roman += 100;
			break;
		case 'D' :
			roman += 500;
			break;
		case 'M' :
			roman +=1000;
			break;
		}

	}
	return roman;
}

int Challenges::removeElement(std::vector<int>& nums, int val) {

  int count = 0;
  for (int i = 0; i < nums.size(); ++i){
    if (nums[i] != val){
      nums[count++] = nums[i];
    }
  }
  return count;
}

std::vector<std::string> Challenges::letterCombinations(std::string digits){

	std::string two = "abc";
	std::string three = "def";
	std::string four = "ghi";
	std::string five = "jkl";
	std::string six = "mno";
	std::string seven = "pqrs";
	std::string eight = "tuv";
	std::string nine = "wxyz";

	std::vector<std::string> combos;

	digits = "23";
	int amt = digits.length();
	int iter = pow(3,amt);

	std::string combo;
	for (int i=0; i<iter/3;i++){
		digits.at(i);

		combos.push_back(combo);
	}
}
