# Explicando o que caralhos é isso que nem eu mesmo entendo parte 1:



### pq eu to fazendo isso?

R1: Os arquivo tao mt confuso e ngm vai entender essa joça (ta mt bagunçado)

R2: Eu vivo me perdendo no Header.cpp, entao isso vai me dar uma noção de como o arquivo ta organizado, e provavelmente vai me dar ideias de como melhora-lo



### Sumario: (dividido em arquivos)

+ 1.0 [main.cpp](#1.0 - Main.cpp)
  
  + Sobre: nada de util, em geral, lê um arquivo e passa ele pro Header.cpp

+ 2.0 Header.h e Header.cpp
  
  + ok, resumindo, seria o arquivo que tem toda a logica por traz do Ednaldo++
  
  + Resumindo 2: um arquivo mal escrito pra caralho que vez ou outra vai apresentar problemas e voce provavelmente nao vai saber que problema foi pq eu n coloquei mensagem de erro nessa bosta

+ 3.0 Shell.cpp (?)
  
  + Ainda é uma ideia que eu n trabalhei muito e ta bem abandonada kk, mas vou dar uma ideia do que o shell é agora e do que ele talvez seja no futuro



## 1.0 - Main.cpp

boralá

+ 1.1 O inicio do arquivo

----------------------------------------------------------

![](/home/lucas/Documentos/github/EdLang/Imagens%20uhu/main1.png)

Ok, no inicio da pra ver um monte de include, eu vou falar o que cada um deles faz ao decorrer do arquivo, mas ja da pra perceber um bem importante nesse inicio

- 1) vector
     
     - Com vector basicamente da pra criar vetores de qualquer tipo, que é o que eu uso pra armazenar todas as palavras de um arquivo
     
     - Não uso uma lista de string pq o vector traz umas coisas interessantes que facilitam na hora de tirar um elemento dele

----------------------------------------------------------


