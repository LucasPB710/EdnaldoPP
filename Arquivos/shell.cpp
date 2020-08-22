#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include "Headers/Header.h"


std::vector<std::string> ops{"=","+","-","*","/"};

                                 //IF                THEN      ENDIF      INT        print   STRING  (           )          SOMA
std::vector<std::string> edWords{"BirinaOCocoEhSeco","ValeTudo","ValeNada","Melancia","Ed:","Lenha","ValeNada","ValeTudo","Chico+",
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

      std::stringstream ss(inp);

      while(ss){
        std::string palavra;
        ss >> palavra;

        pals.push_back(palavra);
        //std::cout<<palavra<<'\n';
      }

      for(int i = 0; i<=pals.size();i++){
      //std::string palavra;
      //std::cout<<">> ";
      //getline(std::cin, inp);
      
      //for (auto x : inp){
        //if(x==' '){
          //pals.push_back(palavra);
        //}
        //else
          //palavra = palavra + x;
      //}
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
