#include <iostream>
#include <cctype> //isdigit
#include <vector>
#include <string>
#include "Header.h"

Funcs fun;

int IdFunc(std::vector<std::string> pals, int pal){

  if(pals[pal] == "Melancia"){
    //verifica se todos caracteres sao inteiros
    int d = 0;
    for(int i =0; i<pals[pal+2].size();i++){

      if(isdigit(pals[pal+2][i]))
        d++;
      
    }
    fun.intN_set(pals[pal+1]);

    if(d == pals[pal+2].size())
      fun.intV_set(stoi(pals[pal+2]));
    else
      std::cout<<"Valor da string nao é numerico\nPalavra: "<<pals[pal+2]<<"\n";
   return 2;
   
  }

  else if(pals[pal] == "Ed:"){

    //checa se é string
    for(int i =0; i<fun.strN_get().size(); i++){

      if(pals[pal+1] == fun.strN_get()[i]){
        fun.print(fun.strV_get()[i]);
        return 1;
      }

    }

    //checa se é uma int
    for (int i = 0; i<fun.intN_get().size();i++){

      if(pals[pal+1] == fun.intN_get()[i]){
        fun.print(fun.intV_get()[i]);
        return 1;
      }
      
    }

    return 1;
  }

  else if(pals[pal] == "Lenha"){

    int pValeTudo = 0, i = 0;
    
    while(pValeTudo == 0 ){
      if(pals[pal+i] == "ValeTudo")
        pValeTudo = i;
      i++;
      if (i>=1000)
        pValeTudo = -2;
    }

    if (pals[pal+2] == "ValeNada" && pValeTudo >0){

      fun.strN_set(pals[pal+1]);
      //fun.strV_set(pals[pal+3]);
      std::string Inp;

      for(int j = 1;j<pValeTudo-2;j++){
        Inp.append(pals[pal+2+j]);
        Inp.append(" ");
      }
      
      fun.strV_set(Inp);
      return pValeTudo;

    }
    else
      std::cout<<"Erro de sintaxe, esperado vale nada e vale tudo\n";
    return 0;

  }

  else if(pals[pal] == "Chico+"){
    int p1,p2;
    bool achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+1] == fun.intN_get()[i]){
        p1 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p1 = stoi(pals[pal+1]);

    achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+2] == fun.intN_get()[i]){
        p2 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p2 = stoi(pals[pal+2]);

    fun.intN_set(pals[pal+3]);
    fun.intV_set(p1+p2);
    
    return 3;
  }

  //SUB
  else if(pals[pal] == "Chico-"){
    int p1,p2;
    bool achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+1] == fun.intN_get()[i]){
        p1 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p1 = stoi(pals[pal+1]);

    achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+2] == fun.intN_get()[i]){
        p2 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p2 = stoi(pals[pal+2]);

    fun.intN_set(pals[pal+3]);
    fun.intV_set(p1-p2);
    
    return 3;
  }

  //MULT
  else if(pals[pal] == "Chico*"){
    int p1,p2;
    bool achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+1] == fun.intN_get()[i]){
        p1 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p1 = stoi(pals[pal+1]);

    achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+2] == fun.intN_get()[i]){
        p2 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p2 = stoi(pals[pal+2]);

    fun.intN_set(pals[pal+3]);
    fun.intV_set(p1*p2);
    
    return 3;
  }

  //DIV
  else if(pals[pal] == "Chico/"){
    int p1,p2;
    bool achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+1] == fun.intN_get()[i]){
        p1 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p1 = stoi(pals[pal+1]);

    achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+2] == fun.intN_get()[i]){
        p2 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p2 = stoi(pals[pal+2]);

    fun.intN_set(pals[pal+3]);
    fun.intV_set(p1/p2);
    
    return 3;
  }

  return 0 ;
}

  ///////////////
 //Gets e Sets//
///////////////

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

std::vector<std::string> Funcs::strV_get(){ return strVars; }
std::vector<std::string> Funcs::strN_get(){ return strNames; }

void Funcs::strN_set(std::string inp){
  strNames.push_back(inp);
}

void Funcs::strV_set(std::string inp){
  strVars.push_back(inp);
}


void Funcs::print(std::string inp){ std::cout<<inp<<std::endl; }
void Funcs::print(int inp){std::cout<<inp<<std::endl;}
