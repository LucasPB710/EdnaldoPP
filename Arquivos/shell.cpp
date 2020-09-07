#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
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

  //std::string arqName;
  //std::cout<<"Nome do arquivo: ";
  //std::cin>> arqName;
  //std::ifstream arq(arqName);

  std::vector<std::string> pals;

  //if(arq){
    //std::string txt;
    //while(arq >> txt){
      //txt.erase(remove(txt.begin(), txt.end(), ' '),txt.end());
      //pals.push_back(txt);

    //}
  //}
  //


    std::string inp;
    while (inp!="EXIT"){
      std::cout<<">> ";

      getline(std::cin, inp);

      if(inp == "Oleo de Macaco"){
        std::cout<<"\nNome do arquivo: ";
        getline(std::cin, inp);

        std::ofstream arq;
        arq.open(inp+".edl",std::ios::app);

        bool escrevendo = true;
        while(escrevendo){
          std::cout<<"(Arq) >> ";
          getline(std::cin, inp);
          if (inp == "Macaco de Oleo"){
            escrevendo = false;
            getline(std::cin, inp);
            arq.close();
          }
          else
            arq<<inp<<std::endl;
        }
      }

      else if(inp == "Vai chover"){
        std::cout<<"\nNome do arquivo: ";
        getline(std::cin,inp);

        std::ifstream arq(inp);


        if(arq){
          std::string txt;
          while(arq >> txt){
            txt.erase(remove(txt.begin(), txt.end(), ' '),txt.end());
            pals.push_back(txt);

          }
        }

          for(int i = 0; i<=pals.size();i++){
            for(int j =0;j<edWords.size();j++){
              if (pals[i] == "Jogue" || pals[i] == "jogue"){
                i+=IF(pals,i, fun, 1);
              }
              else if(pals[i] == edWords[j] || pals[i] == edWords_[j]){
                i+=IdFunc(pals,i, fun); 
              }
              else if(pals[i] == "VamosBrilhar" || pals[i] == "vamos_brilhar"){
                i+=WHILE(pals, i, fun);
              }
            }
          }
      }

      std::stringstream ss(inp);

      while(ss){
        std::string palavra;
        ss >> palavra;

        pals.push_back(palavra);
        //std::cout<<palavra<<'\n';
      }

      for(int i = 0; i<=pals.size();i++){
        for(int j =0;j<edWords.size();j++){
          if (pals[i] == "Jogue" || pals[i] == "jogue"){
            i+=IF(pals,i, fun, 1);
          }
          else if(pals[i] == edWords[j] || pals[i] == edWords_[j]){
            i+=IdFunc(pals,i, fun); 
          }
          else if(pals[i] == "VamosBrilhar" || pals[i] == "vamos_brilhar"){
            i+=WHILE(pals, i, fun);
          }
        }
        pals.clear();
      //std::cout<<pals[i];
      }

    }
  



  return 0;
}
