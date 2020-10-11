#include "SFML.h"
#include "Header.h"
#include <SFML/Graphics.hpp>
#include <iostream>

std::vector<sf::CircleShape> ListaDesenho;

bool digito(std::string pal){
    int d = 0;
    for(int i = 0; i<pal.size(); i++){
        if(isdigit(pal[i]) || pal[i] == '-' || pal[i] == '.' )
            d++;
    }

    if(d == pal.size())
        return true;
    else
        return false;
}

float fExist(std::string pal, Funcs &fun){
    int pos;
    for(int i = 0; i<fun.intN_get().size(); i++){
        if(pal == fun.intN_get()[i]){
            pos = i;
            i = fun.intN_get().size();
        }
    }

    return fun.intV_get()[pos];

        
}

std::string sExist(std::string pal, Funcs &fun){
    int pos;
    for(int i = 0; i<fun.strN_get().size(); i++){
        if(pal == fun.strN_get()[i]){
            pos = i;
            fun.strN_get().size();
        }
    }

    return fun.strV_get()[pos];
}


//ID: 1->Desenha: (desenha o objeto, window.draw())
//ID: 2->Desenha  (mostra tudo, window.display())
void EdSFML::Desenha(){
    // int objpos = -1;
    // for(int i = 0; i <= getBoNomes().size(); i++){
    //     if(obj == getBoNomes()[i]){
    //         objpos = i;
    //         i = getBola().size();
    //     }
    // }


    int x, y;
    std::string nome;

    nome = getNomeJanela();
    x = getX();
    y = getY();

    sf::RenderWindow window (sf::VideoMode(x,y), nome);


    window.clear(sf::Color::Black);

    int t1 = ListaDesenho.size(), t2 = getBoNomes().size();


    while(window.isOpen()){
        sf::Event evento;
        while(window.pollEvent(evento)){
            if(evento.type == sf::Event::Closed){
                window.close();
            }
        }

        for(int i = 0; i<ListaDesenho.size() ; i++){
            window.draw(ListaDesenho[i]);
        }

        window.display();
    }



}

void EdSFML::Pos(std::string nome, int x, int y){
    int objPos;
    bool existe = false;

    if(nome[0] == '"'){
        nome.erase(nome.length()-1);
        nome.erase(nome.begin());

    }

    for(int i = 0; i < bolasNomes.size(); i++){
        if(nome == bolasNomes[i]){
            objPos = i;
            existe = true;
            i = bolasNomes.size();
        }
    }

    if(existe){
        sf::CircleShape bola = Bolas[objPos];

        bola.setPosition(x,y);

        changeBola(bola, objPos);
    }

    else
        std::cout<<"\nNome de bola invalido, ou bola nao criada <"<<nome<<">\n";

}

void EdSFML::ednaldoPereira(int x, int y){
    sf::Texture ed;
    ed.loadFromFile("Ednaldo.png", sf::IntRect(0,0,x,y));
    sf::Sprite ednaldo;
    ednaldo.setTexture(ed); 
    
    sf::RenderWindow window (sf::VideoMode(x,y), getNomeJanela());
    window.setFramerateLimit(60);

    while(window.isOpen()){
        sf::Event evento;
        while(window.pollEvent(evento)){
            if(evento.type == sf::Event::Closed){
                window.close();
            }
        }

        window.clear(sf::Color::Black);

        window.draw(ednaldo);

        window.display();
    }
}

void EdSFML::Rot(std::string nome, float angulo){
    int objPos;

    for(int i = 0; i<getBoNomes().size(); i++){
        if(nome == getBoNomes()[i]){
            objPos = i;
            i = getBoNomes().size();
        }
    }

    sf::CircleShape _bola = getBola()[objPos];
    _bola.rotate(angulo);
    changeBola(_bola, objPos);
}




////////////////
//SETS e gets///
////////////////

// void EdSFML::setJanela(std::string nome, int x, int y){
//     janela = new sf::RenderWindow(sf::VideoMode(x,y), nome);
// }

void EdSFML::setBola(std::string nome,float raio, std::string color){
    sf::CircleShape bola(raio);
    int r = 0, g = 0, b = 0;

    if(color == "Azul"){b = 255;}
    else if(color == "Vermelho"){ r = 255;}
    else if(color == "Verde"){g = 255;}
    else if(color[0] == '#'){
        std::string r_; r_.resize(2);
        std::string g_; g_.resize(2);
        std::string b_; b_.resize(2);

        r_[0] = color[1]; r_[1] = color[2];
        g_[0] = color[3]; g_[1] = color[4];
        b_[0] = color[5]; b_[1] = color[6];

        r = stoi(r_,0,16);
        g = stoi(g_,0,16);
        b = stoi(b_,0,16);

    }

    bola.setFillColor(sf::Color(r,g,b));

    Bolas.push_back(bola);
    bolasNomes.push_back(nome);
}

void EdSFML::setRegular(std::string nome, int lados, float raio, std::string color){
    sf::CircleShape bola(raio, lados);
    int r = 0, g = 0, b = 0;

    if(color == "Azul"){b = 255;}
    else if(color == "Vermelho"){ r = 255;}
    else if(color == "Verde"){g = 255;}
    else if(color[0] == '#'){
        std::string r_; r_.resize(2);
        std::string g_; g_.resize(2);
        std::string b_; b_.resize(2);

        r_[0] = color[1]; r_[1] = color[2];
        g_[0] = color[3]; g_[1] = color[4];
        b_[0] = color[5]; b_[1] = color[6];

        r = stoi(r_,0,16);
        g = stoi(g_,0,16);
        b = stoi(b_,0,16);

    }

    bola.setFillColor(sf::Color(r,g,b));

    Bolas.push_back(bola);
    bolasNomes.push_back(nome);
}

void EdSFML::setRet(std::string nome, float x, float y, std::string color){

    sf::RectangleShape rect(sf::Vector2f(x,y));
    int r = 0, g = 0, b = 0;
    if(color == "Azul"){b = 255;}
    else if(color == "Vermelho"){ r = 255;}
    else if(color == "Verde"){g = 255;}
    else if(color[0] == '#'){
        std::string r_; r_.resize(2);
        std::string g_; g_.resize(2);
        std::string b_; b_.resize(2);

        r_[0] = color[1]; r_[1] = color[2];
        g_[0] = color[3]; g_[1] = color[4];
        b_[0] = color[5]; b_[1] = color[6];

        r = stoi(r_,0,16);
        g = stoi(g_,0,16);
        b = stoi(b_,0,16);

    }

    rect.setFillColor(sf::Color(r,g,b));

    Retangulos.push_back(rect);
    retangulosNomes.push_back(nome);


}

void EdSFML::changeBola(sf::CircleShape inp, int pos){
    Bolas[pos] = inp;
}

void EdSFML::setJanela(int x, int y, std::string nome){
    ResX = x; ResY = y; NomeJanela = nome;
}

void EdSFML::setCor(std::string cor){
    Cor = cor;
}

// sf::RenderWindow EdSFML::getJanela(){ return janela; }
std::vector<sf::CircleShape> EdSFML::getBola(){ return Bolas;}
std::vector<std::string> EdSFML::getBoNomes(){ return bolasNomes;}
std::string EdSFML::getNomeJanela(){ return NomeJanela;}
int EdSFML::getX(){ return ResX;}
int EdSFML::getY(){ return ResY;}
std::string EdSFML::getCor(){ return Cor;}
std::vector<sf::RectangleShape> EdSFML::getRetangulos(){ return Retangulos;}


  /////////////////////////////////////////////
 ///FUNCAO QUE IDENTIFICA OS COISOS LA ///////
/////////////////////////////////////////////

int IdSFML(std::vector<std::string> pals, int pal, EdSFML &esf, Funcs &fun){
    if(pals[pal] == "Desenha:"){
        std::string nome;
        int objPos;

        nome = pals[pal+1];

        if(nome[0] == '"'){
            nome.erase(nome.length()-1);
            nome.erase(nome.begin());
        }

        for(int i = 0; i<esf.getBoNomes().size(); i++){
            if(nome == esf.getBoNomes()[i]){
                objPos = i;
                i = esf.getBoNomes().size();
            }
        }
        sf::CircleShape bola = esf.getBola()[objPos];

        ListaDesenho.push_back(bola);

        return 1;

    }

    if(pals[pal] == "Desenha"){
        esf.Desenha();

        return 1;

    }
    
    else if(pals[pal] == "Bola"){
        //Bola nome raio cor

        std::string nome;

        if(pals[pal+1][0] != '"')
            nome = sExist(pals[pal+3], fun);

        else{
            nome = pals[pal+1];
            nome.erase(nome.length()-1);
            nome.erase(nome.begin());
        }

        float raio = 0;

        if(digito(pals[pal+2]))
            raio = stof(pals[pal+2]);

        else
            raio = fExist(pals[pal+2], fun);

        esf.setBola(nome, raio, pals[pal+3]);

        return 3;
    }

    else if(pals[pal] == "Janela"){
        //Janela x y nome
        int x, y;
        if(digito(pals[pal+1]))
            x = std::stoi(pals[pal+1]);

        else
            x = fExist(pals[pal+1], fun);

        if(digito(pals[pal+2]))
            y = std::stoi(pals[pal+2]);

        else
            y = fExist(pals[pal+2], fun) ;

        esf.setJanela(x,y,pals[pal+3]);
        return 3;
    }

    else if(pals[pal] == "Pos"){
        int x, y; std::string nome;

        if(digito(pals[pal+2]))
            x = stoi(pals[pal+2]);

        else
            x = fExist(pals[pal+2], fun) ;
        
        if(digito(pals[pal+3]))
            y = stoi(pals[pal+3]);
        
        else
            y = fExist(pals[pal+3], fun) ;

        if(pals[pal+1][0] != '"')
            nome = sExist(pals[pal+1], fun);

        else
            nome = pals[pal+1];


        esf.Pos(nome,x,y);

        return 3;
    }

    else if(pals[pal] == "EdnaldoPereira"){
        esf.ednaldoPereira(stoi(pals[pal+1]), stoi(pals[pal+2]));
        return 2;
    }

    else if(pals[pal] == "Regular"){
        //Regular nome lados tamanho cor
        int lados; std::string nome;
        float tamanho;

        if(digito(pals[pal+2]))
            lados = stoi(pals[pal+2]);

        else
            lados = fExist(pals[pal+2], fun);

        if(digito(pals[pal+3]))
            tamanho = stof(pals[pal+3]);

        else
            tamanho = fExist(pals[pal+3], fun);

        if(pals[pal+1][0] != '"')
            nome = sExist(pals[pal+1], fun);

        else{
            nome = pals[pal+1];
            nome.erase(nome.length() - 1);
            nome.erase(nome.begin());
        }

        esf.setRegular(nome, lados, tamanho, pals[pal+4]);

    }

    else if(pals[pal] == "Rot"){
        std::string nome;
        float angulo;

        if(pals[pal+1][0] != '"')
            nome = sExist(pals[pal+1], fun);

        else
            nome = pals[pal+1];

        if(digito(pals[pal+2]))
            angulo = stof(pals[pal+2]);

        else
            angulo = fExist(pals[pal+2], fun);

        esf.Rot(nome, angulo);

    }


    return 0;
}
