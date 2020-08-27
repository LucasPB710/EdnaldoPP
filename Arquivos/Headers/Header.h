#pragma once
#include <vector>
#include <iostream>

int IdFunc(std::vector<std::string> pals, int pal);

void pal_set(int inp);
void pals_set(std::vector<std::string> inp);

class Funcs{
  public:
    //void if_();
    //
    void print(std::string inp);
    void print(int inp);
    void print(float inp);

    //gets
    std::vector<float> intV_get();
    std::vector<std::string> intN_get();
    std::vector<std::string> strV_get();
    std::vector<std::string> strN_get();
    int pal_get();
    std::vector<std::string> pals_get();
    

    //sets
    void intV_set(float inp);
    void intV_change(float inp, int pos);
    void intN_set(std::string inp);
    void strN_set(std::string inp);
    void strV_set(std::string inp);
    void strV_change(std::string inp, int pos);
    


  private:
    std::vector<float> intVars;
    std::vector<std::string> intNames;
    std::vector<std::string> strNames;
    std::vector<std::string> strVars;
    std::vector<std::string> pals;
    int pal;

};
