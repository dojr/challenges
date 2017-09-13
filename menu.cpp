/*
 * menu.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: donald
 */


#include "headers/roman.h"
#include <iostream>
#include <string>

int main(){
	std::string test = "MCDLXXVI"; //1904
	Roman object;
	int num = object.romanToInt(test);
	std::cout << "Number: " << num;
}

