#pragma once
#include <vector>
#include <iostream>

int IdFunc(std::vector<std::string> pals, int pal);

class Funcs{
  public:
    //void if_();
    //
    void print(std::string inp);
    void print(int inp);

    //gets
    std::vector<int> intV_get();
    std::vector<std::string> intN_get();
    int intS_get();


    //sets
    void intV_set(int inp);
    void intN_set(std::string inp);
    void intS_set(int inp);



  private:
    std::vector<int> intVars;
    std::vector<std::string> intNames;
    int intSize;
};
