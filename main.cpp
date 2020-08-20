#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include "Header.h"


std::vector<std::string> ops{"=","+","-","*","/"};

std::vector<std::string> edWords{"BirinaOCocoEhSeco","ValeTudo","ValeNada","Coco","Ed:"};
                                 //IF                THEN      ENDIF      INT


int main(){
  
  std::string arqName;
  std::cout<<"Nome do arquivo: ";
  std::cin>> arqName;
  std::ifstream arq(arqName);

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
      if(pals[i] == edWords[j]){
        i+=IdFunc(pals,i);
      }
    }
      
  }




  return 0;
}
