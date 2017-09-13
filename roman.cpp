/*
 * roman.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: donald
 */


#include <string>
#include "headers/roman.h"
int Roman::romanToInt(std::string s){

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
