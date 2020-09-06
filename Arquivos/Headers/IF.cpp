#include "IF.h"
#include "Header.h"
#include <iostream>
#include <vector>

bool ifAcontece = false;
int IF(std::vector<std::string> pals, int pal, Funcs& fun, int op);

int IF(std::vector<std::string> pals, int pal, Funcs& fun, int op){
if (((pals[pal] == "Jogue" || pals[pal] == "jogue") && (pals[pal+4] == "SomenteParaGanhar" || pals[pal+4] == "somente_para_ganhar")) 
|| ((pals[pal] == "VamosBrilhar"|| pals[pal] == "vamos_brilhar") && (pals[pal+4] == "ComoUmDiamante" || pals[pal+4] == "como_um_diamante"))){

    bool string = false, float_ = false;
    bool string2 = false, float_2 = false;
    int strPos, fPos;
    int strPos2, fPos2;
    int comp; // 1 -> ==; 2 -> >, 3 -> <, 4 -> !=
    bool acontece = false;


    if(fun.strN_get().size() > 0){
      //verifica se é string [x]
      for(int i = 0; i<fun.strN_get().size(); i++){
        if (pals[pal+1] == fun.strN_get()[i]){
          string = true;
          strPos = i;
        }

        if (pals[pal+3] == fun.strN_get()[i]){
          string2 = true;
          strPos2 = i;
        }
      }
    }


    if (fun.intN_get().size() > 0){
      //Verifica se é float [x]
      for(long int i = 0; i<fun.intN_get().size(); i++){
        if (pals[pal+1] == fun.intN_get()[i]){
          float_ = true;
          fPos = i;
        }

        if (pals[pal+3] == fun.intN_get()[i]){
          float_2 = true;
          fPos2 = i;
        }
      }
    }

    //Verifica qual comparação será feita
    // 1 -> "=="; 2 -> ">", 3 -> "<", 4 -> "!="

    if (pals[pal+2] == "=="){
      comp = 1;
    }
    else if (pals[pal+2] == ">"){
      comp = 2;
    }
    else if (pals[pal+2] == "<"){
      comp = 3;
    }
    else if (pals[pal+2] == "!="){
      comp = 4;
    }




    //procura posição do ValeTudo (ValeNada == pals[pal+4])
    int pValeTudo = 0, i = 0;
    if (op == 1){   
      while(pValeTudo == 0){
        if(pals[pal+i] == "NaoParaPerder" || pals[pal+i] == "nao_para_perder")
          pValeTudo = i;
        else if(i>=1000){
          pValeTudo = -2;
        }
        i++;
      }
    }
    
    if (op == 2){
      while(pValeTudo == 0){
        if(pals[pal+i] == "EmUmaGeracaoMarcante"|| pals[pal+1] == "em_uma_geracao_marcante")
          pValeTudo = i;
        else if(i>=1000){
          pValeTudo = -2;
        }
        i++;
      }
    }


    //Verficia se é o mesmo tipo
    if (float_ && float_2){
      //realiza a comparação necessaria
      // 1 -> "=="; 2 -> ">", 3 -> "<", 4 -> "!="
      switch (comp){
        case 1:
          if (fun.intV_get()[fPos] == fun.intV_get()[fPos2]){
            acontece = true;
          }
          break;
        case 2:
          if (fun.intV_get()[fPos] > fun.intV_get()[fPos2]){
            acontece = true;
            // std::cout<<"JOJOJOJ";
          }
          break;
        case 3:
          if (fun.intV_get()[fPos] < fun.intV_get()[fPos2]){
            acontece = true;
          }
          break;
        case 4:
          if (fun.intV_get()[fPos] != fun.intV_get()[fPos2]){
            acontece = true;
          }
          break;
        default:
          break;
      }
     }

    else if (string && string2){
      switch(comp){
        case 1:
          if (fun.strV_get()[strPos] == fun.strV_get()[strPos2]){
            acontece = true;
          }
          break;
        case 2:
          if (fun.strV_get()[strPos].length() > fun.strV_get()[strPos2].length()){
            acontece = true;
          }
          break;
        case 3:
          if (fun.strV_get()[strPos].length() < fun.strV_get()[strPos2].length()){
            acontece = true;
          }
          break;
        case 4:
          if (fun.strV_get()[strPos] != fun.strV_get()[strPos2]){
            acontece = true;
          }
          break;
        default:
          break;
      }
    }


    else{
      std::cout<<"Comparando dois tipos diferentes";
      return pValeTudo;
    }

    //Realiza as operações, caso aconteça (ou seja, a comparação seja verdade)
    if (acontece && op == 1){
      acontece = false;
      i = 5;
      while(pals[pal+i] != "NaoParaPerder" || pals[pal+i] != "nao_para_perder"){
          IdFunc(pals, pal+i, fun); 
          i+=1;  
        }
      if(!acontece)
        return pValeTudo;
//      return pal+5;
    }

    else if(acontece && op == 2){
      return 1;
    }

    else
      return pValeTudo;

  }

  else if((pals[pal] == "Jogue" || pals[pal] == "jogue") && (pals[pal+4] != "SomenteParaGanhar" || pals[pal+4] != "somente_para_ganhar")){
    int pValeTudo = 0, i = 0;
    while(pValeTudo == 0){
      if(pals[pal+i] == "NaoParaPerder" || pals[pal+i] == "nao_para_perder") 
        pValeTudo = i;
      else if(i>=1000){
        pValeTudo = -2;
      }
      i++;
    }
    return pValeTudo;

  }
   //////////
  //FIM IF//
 //////////

 return 0;

}


   /////////
  //WHILE//
 /////////

 
int WHILE(std::vector<std::string> pals, int pal, Funcs& fun){
  // VamosBrilhar x == x    ComoUmDiamante Ed: x NessaGeracaoMarcante
  // pal         pal+1+2+3  pal+4                  pValeTudo
  int i = 5; // int i = 5 pq vamos verificar qual a proxima palava que pode ser o NessaGeracaoMarcante, n pode ser nenhuma antes de pals[pal+5]
  int acontece = IF(pals, pal, fun, 2);
  int pValeTudo = 0;

  while(pValeTudo == 0){
    if(pals[pal+i] == "EmUmaGeracaoMarcante" || pals[pal+i] == "em_uma_geracao_marcante"){
      pValeTudo = i;
    }
    i++;
  }
  // std::cout<<"Acontece: "<<IF(pals,pal, fun, 2)<<"\n";
  while(acontece == 1){
    i = 5;
    while(i<pValeTudo){
      IdFunc(pals,pal+i,fun);
      i++;

    }
    acontece = IF(pals, pal, fun, 2);
    
  };

  return pValeTudo;
}

int ELSE(std::vector<std::string> pals, int pal, Funcs& fun, int op){
  int i = 5;
  int acontece = IF(pals, pal, fun, 2);
  int pValeTudo = 0;
  while(pValeTudo == 0){
    if(pals[pal+i] == "DeDificuldades" || pals[pal+i] == "de_dificuldades") 
      pValeTudo = i;
    i++;
  }

  if(acontece != 1){
    i = 5;
    while(pals[pal+i] != "DeDificuldades" || pals[pal+i] != "de_dificuldades"){
      IdFunc(pals, pal+i, fun);
      i++;
    }
  }

  return pValeTudo;

}