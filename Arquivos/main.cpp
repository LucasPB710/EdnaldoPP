#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include "Headers/Header.h"
#include "Headers/IF.h"


std::vector<std::string> ops{"=","+","-","*","/"};

                                 //INT        print   STRING  SOMA ...
std::vector<std::string> edWords_{"melancia","ed:","lenha","chico+","chico-","chico*","chico/","edp:","what_is_the:",
                                    "chico+*","chico+/","chico++","chico+-", "a_vida_eh","de_torar","coco_seco"};

std::vector<std::string> edWords{"Melancia","Ed:","Lenha","Chico+","Chico-","Chico*","Chico/","EdP:","WhatIsThe:",
                                    "Chico+*","Chico+/","Chico++","Chico+-", "AVidaEh","DeTorar","CocoSeco"};


int main(){
  Funcs fun;

  std::string arqName;
  std::cout<<"Nome do arquivo: ";
  std::cin>> arqName;
  std::ifstream arq(arqName);
  std::cin.ignore();

  std::vector<std::string> pals;

  if(arq){
    std::string txt;
    while(arq >> txt){
      txt.erase(remove(txt.begin(), txt.end(), ' '),txt.end());
      pals.push_back(txt);

    }
  }

  for(int i = 0; i<pals.size(); i++){
    for(int j = 0;j<edWords.size();j++){
      if (pals[i] == "Jogue" || pals[i] == "jogue"){
        i += IF(pals, i, fun);
      }
      if(pals[i] == edWords[j] || pals[i] == edWords_[j]){
        i+=IdFunc(pals, i, fun); 
      }
      if(pals[i] == "VamosBrilhar" || pals[i] == "vamos_brilhar"){
        i+=WHILE(pals, i, fun);
      }
    }
      
  }
  std::cin.ignore();
  std::cin.get();

  


  return 0;
}
