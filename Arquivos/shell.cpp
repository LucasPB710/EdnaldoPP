#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include "Headers/Header.h"


std::vector<std::string> ops{"=","+","-","*","/"};

                                 //IF                THEN      ENDIF      INT        print   STRING  (           )          SOMA
std::vector<std::string> edWords{"Jogue","ValeTudo","ValeNada","Melancia","Ed:","Lenha","ValeNada","ValeTudo","Chico+",
                                  "Chico-","Chico*","Chico/"};


int main(){
  
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
            escrevendo == false;
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
              if (pals[i] == edWords[j]){
                i+=IdFunc(pals,i);
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
          if (pals[i] == edWords[j]){
            i+=IdFunc(pals,i);
          }
        }
        pals.clear();
      //std::cout<<pals[i];
      }

    }
  



  return 0;
}
