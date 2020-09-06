#pragma once

#include <vector>
#include <string>
#include "Header.h"

int IF(std::vector<std::string> pals, int pal, Funcs& fun, int op); //op = 1 -> if, op = 2 -> while, op = 3 ->  elsr
int WHILE(std::vector<std::string> pals, int pal, Funcs& fun);
int ELSE(std::vector<std::string> pals, int pal, Funcs& fun, int op);

