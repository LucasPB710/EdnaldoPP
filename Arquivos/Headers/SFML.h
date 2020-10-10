#pragma once
#include "Header.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>



class EdSFML{
    public:
 

        //void setJanela(std::string nome, int x, int y);
        void setBola(std::string nome, float raio, std::string color);
        void changeBola(sf::CircleShape inp, int pos);
        void setJanela(int x, int y, std::string nome);
        void setCor(std::string cor); //Suporte a hexadecimal

        void setRet(std::string nome, float x, float y, std::string color);



        std::vector<sf::CircleShape> getBola();
        std::vector<std::string> getBoNomes();
        int getX();
        int getY();
        std::string getNomeJanela();
        std::string getCor();
        std::vector<sf::RectangleShape> getRetangulos();
        std::vector<std::string> getRetNomes();



        void Desenha(std::string obj);
        void BolaPos(int x, int y, std::string nome);
        void ednaldoPereira(int x, int y);


    private:
        int ResX = 800;
        int ResY = 600;
        std::string NomeJanela = "DEFAULT";
        
        std::vector<sf::CircleShape> Bolas;
        std::vector<std::string> bolasNomes;
        std::string Cor = "Azul";
        std::vector<sf::RectangleShape> Retangulos;
        std::vector<std::string> retangulosNomes;

};
int IdSFML(std::vector<std::string> pals, int pal, EdSFML &esf, Funcs &fun);
