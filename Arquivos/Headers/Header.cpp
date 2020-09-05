#include <iostream>
#include <cctype> //isdigit
#include <vector>
#include <string>
#include "Header.h"


int IdFunc(std::vector<std::string> pals, int pal, Funcs& fun);

int IdFunc(std::vector<std::string> pals, int pal, Funcs& fun){

  bool intJaExiste = false;
  int posInt;

  if(pals[pal] == "Melancia"){
    //verifica se todos caracteres sao inteiros
    int d = 0;
    for(int i =0; i<pals[pal+2].size();i++){

      if(isdigit(pals[pal+2][i]))
        d++;
      else if(pals[pal+2][i] == '.' || pals[pal+2][i] == '-')
        d++;
    }

    for(int i = 0; i<fun.intN_get().size(); i ++){
      if (pals[pal+1] == fun.intN_get()[i]){
        posInt = i;
        intJaExiste = true;
      }
    }


    if (intJaExiste){
      fun.intN_set(pals[pal+1]);
      fun.intV_change(stof(pals[pal+2]),posInt);
      return 2;
    }
    else{
      if(d == pals[pal+2].size()){
        fun.intV_set(stof(pals[pal+2]));
        fun.intN_set(pals[pal+1]);
      }
      else
        std::cout<<"Valor da string nao é numerico\nPalavra: "<<pals[pal+2]<<"\n";
     return 2;
    }

  }

  else if(pals[pal] == "Ed:" || pals[pal] == "EdP:"){

    int tipo = -1; //0 - stringJaExistente; 1 - float ja existente; 2 - float nova; 3 - string nova

    //checa se é string
    for(int i =0; i<fun.strN_get().size(); i++){

      if(pals[pal+1] == fun.strN_get()[i]){
        fun.print(fun.strV_get()[i]);
        tipo = 0;
      }

    }

    //checa se é uma int
    if (tipo == -1){
    for (int i = 0; i<fun.intN_get().size();i++){

      if(pals[pal+1] == fun.intN_get()[i]){
        fun.print(fun.intV_get()[i]);
        tipo = 1;
      }

    }
    }

  //verifica se é um digito
    if (tipo == -1){
      int d =0;
      for (int i =0; i<pals[pal+1].size(); i++){   
        if(isdigit(pals[pal+1][i]))
          d++;
      }

      if(d == pals[pal+1].size()){
        fun.print(pals[pal+1]);
        tipo = 2;
      }
    }


    //Verifica se é uma string
    if(tipo == -1){
      if (pals[pal+1][0] == '"' && pals[pal+1][pals[pal+1].size()-1] == '"'){
        pals[pal+1].erase(pals[pal+1].begin());

        pals[pal+1].erase(pals[pal+1].size()-1);
        fun.print(pals[pal+1]);

      }

    }
    

    if(pals[pal][2] == 'P'){
        fun.printL();
    }


    return 1;
  }

  else if(pals[pal] == "Lenha"){  

    int pValeTudo = 0, i = 0, posStr;
    bool strJaExiste = false;

    while(pValeTudo == 0 ){
      if(pals[pal+i] == "ValeTudo")
        pValeTudo = i;
      i++;
      if (i>=1000)
        pValeTudo = -2;
    }

    if (pals[pal+2] == "ValeNada" && pValeTudo >0){

      for(int i = 0;i<fun.strN_get().size(); i++){
        if(pals[pal+1] == fun.strN_get()[i]){
          strJaExiste = true;
          posStr = i;
        }

      }

      //fun.strV_set(pals[pal+3]);
      std::string Inp;

      for(int j = 1;j<pValeTudo-2;j++){
        Inp.append(pals[pal+2+j]);
        Inp.append(" ");
      }

      if(strJaExiste){
        fun.strV_change(Inp, posStr);
      }

      else{
        fun.strV_set(Inp);
        fun.strN_set(pals[pal+1]);
      }
      return pValeTudo;

    }
    else
      std::cout<<"Erro de sintaxe, esperado vale nada e vale tudo\n";
    return 0;

  }

   /////////////////////
  //INICIO MATEMATICA//
 /////////////////////

  else if(pals[pal] == "Chico+" || pals[pal] == "Chico-" || pals[pal] == "Chico*" || pals[pal] == "Chico/" || pals[pal] == "Chico+*" || pals[pal] == "Chico++"|| pals[pal] == "Chico+-" || pals[pal] == "Chico+/"){
    float p1,p2;
    //float resultado;
    bool achado = false;
    int intPos;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+1] == fun.intN_get()[i]){
        p1 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p1 = stof(pals[pal+1]);

    achado = false;

    for(int i = 0; i<fun.intN_get().size(); i++){
      if (pals[pal+2] == fun.intN_get()[i]){
        p2 = fun.intV_get()[i];
        i = fun.intN_get().size();
        achado = true;
      }
    }

    if(!achado)
      p2 = stof(pals[pal+2]);

    achado = false;

    for(int i =0; i < fun.intN_get().size(); i++){
      if(pals[pal+3] == fun.intN_get()[i]){
        achado = true;
        intPos = i;
      }
    }

    if(achado && pals[pal] == "Chico+" && pals[pal] == "Chico-" && pals[pal] == "Chico*" && pals[pal] == "Chico/"){
      if(pals[pal][5] == '+')
        fun.intV_change(p1+p2, intPos);
      else if(pals[pal][5] == '-')
        fun.intV_change(p1-p2,intPos);
      else if(pals[pal][5] == '*')
        fun.intV_change(p1*p2,intPos);
      else if(pals[pal][5] == '/')
        fun.intV_change(p1/p2,intPos);

    }

    //ESPECIFICO PRO FATORIAL
    else if(achado && (pals[pal] == "Chico+*" || pals[pal] == "Chico++" || pals[pal] == "Chico+-" || pals[pal] == "Chico+/")){

      int temp = fun.intV_get()[intPos];

      if(pals[pal][6] == '*'){
        fun.intV_change(p1*p2*temp, intPos);
      }

      if(pals[pal][6] == '-'){
        fun.intV_change(p1-p2-temp, intPos);
      }

      if(pals[pal][6] == '+'){
        fun.intV_change(p1+p2+temp, intPos);
      }

      if(pals[pal][6] == '/'){
        fun.intV_change(p1/p2/temp, intPos);
      }

      // switch(pals[pal][6]){
      //   case('*'):
      //     fun.intV_change(p1*p2*temp, intPos);
      //     std::cout<<"jorge";
      //     break;
      //   case('+'):
      //     fun.intV_change(p1+p2+temp, intPos);
      //     std::cout<<"jorge";
      //     break;
      //   case('-'):
      //     fun.intV_change(p1-p2-temp, intPos);
      //     break;
      //   case('/'):
      //     fun.intV_change(p1/p2/temp, intPos);
      //     break;
      //   default:
      //     break;

      // }

    }

    else{
      fun.intN_set(pals[pal+3]);
      if(pals[pal][5] == '+')
        fun.intV_set(p1+p2);
      else if(pals[pal][5] == '-')
        fun.intV_set(p1-p2);
      else if(pals[pal][5] == '*')
        fun.intV_set(p1*p2);
      else if(pals[pal][5] == '/')
        fun.intV_set(p1/p2);
      }

    return 3;

  }

  //INPUT
  //-> WhatIsThe: Nome_da_int_string Valor
  else if(pals[pal] == "WhatIsThe:"){ 
    //verfica se existe e é int ou string
    bool existe = false;
    int pos;
    int tipo; //1-string 2-int
    std::string inp;
    getline(std::cin,inp);

    if(fun.strN_get().size()>0){
      for(int i =0; i < fun.strN_get().size();i++){
        if(pals[pal+1] == fun.strN_get()[i]){
          pos = i;
          existe = true;
          tipo = 1;
          i = fun.strN_get().size();
        }
      }
    }
    
    if(fun.intN_get().size()){
      for(int i =0; i < fun.intN_get().size();i++){
        if(pals[pal+1] == fun.intN_get()[i]){
          pos = i;
          existe = true;
          tipo = 2;
          i = fun.intN_get().size();
        }
      }
    }

    if(!existe){
      int d = 0;
      for(int i = 0; i<inp.length(); i++){
        if(isdigit(inp[i]))
          d++;
      }
      if(d == inp.length())
        tipo = 2;
      else
        tipo = 1;
    }

    if(existe){
      
      switch(tipo){
        case 1:
          fun.strV_change(inp, pos);
          return 1;
          break;
        case 2:
          fun.intV_change(stof(inp), pos);
          return 1;
          break;
        default:
          return 1;
          break;        
      }
    }

    else if(!existe){
      switch(tipo){
        case 1:
          fun.strV_set(inp);
          fun.strN_set(pals[pal+1]);
          return 1;
          break;
        case 2:
          fun.intV_set(stof(inp));
          fun.intN_set(pals[pal+1]);
          return 1;
          break;
        default:
          return 1;
          break;        
      }
    }
    return 1;

  }

  


  return 0 ;
}

  ///////////////
 //Gets e Sets//
///////////////

std::vector<float> Funcs::intV_get(){
  return intVars;
}

void Funcs::intV_set(float inp){
 intVars.push_back(inp);
}

void Funcs::intV_change(float inp, int pos){
 intVars[pos] = inp;
}

std::vector<std::string> Funcs::intN_get(){
  return intNames;
}

void Funcs::intN_set(std::string inp){
 intNames.push_back(inp);
}


std::vector<std::string> Funcs::strV_get(){ return strVars; }
std::vector<std::string> Funcs::strN_get(){ return strNames; }

void Funcs::strN_set(std::string inp){
  strNames.push_back(inp);
}

void Funcs::strV_set(std::string inp){
  strVars.push_back(inp);
}

void Funcs::strV_change(std::string inp, int pos){
  strVars[pos] = inp;
}



void Funcs::printL(){std::cout<<'\n';}
void Funcs::print(std::string inp){ std::cout<<inp;}
void Funcs::print(float inp){std::cout<<inp;}
