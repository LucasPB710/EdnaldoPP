#include <iostream>
#include <cctype> //isdigit
#include <vector>
#include <string>
#include "Header.h"

Funcs fun;

int IdFunc(std::vector<std::string> pals, int pal){
//  std::cout<<"Girafa\n";
  if(pals[pal] == "Melancia"){
 //   std::cout<<"Girafa2\n";
   if(1==1){
    fun.intN_set(pals[pal+1]);

    fun.intV_set(stoi(pals[pal+2]));
   }
  // std::cout<<fun.intN_get().size()<<'\n';
   return 2;
  }
  else if(pals[pal] == "Ed:"){
   
    //checa se é uma int
    for (int i = 0; i<fun.intN_get().size();i++){
      if(pals[pal+1] == fun.intN_get()[i]){
        fun.print(fun.intV_get()[i]);
      }
    }
  }
  return 0 ;
}



std::vector<int> Funcs::intV_get(){
  return intVars;
}

void Funcs::intV_set(int inp){
 intVars.push_back(inp); 
}

std::vector<std::string> Funcs::intN_get(){
  return intNames;
}

void Funcs::intN_set(std::string inp){
 intNames.push_back(inp); 
}

int Funcs::intS_get(){
  return intSize;
}

void Funcs::intS_set(int inp){
  intSize = inp;

}



void Funcs::print(std::string inp){ std::cout<<inp<<std::endl; }
void Funcs::print(int inp){std::cout<<inp<<std::endl;}
