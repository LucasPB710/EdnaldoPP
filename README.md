[![Run on Repl.it](https://repl.it/badge/github/LucasPB710/EdLang)](https://repl.it/github/LucasPB710/EdLang)

![](Gifs/gif.gif)

# Lista com os comandos da edlang:

(voce nao precisa ficar indo ao final do readme, no arquivo abaixo tem exemplos melhores")

[comandos](Comandos.md)

# Sumario:
+ 1.0 SOBRE
  - 1.1 Sobre o edlang
+ 2.0 COMO USAR NO REPLIT
  -2.1 Usando shell no replit
+ 3.0 COMO CRIAR UM ARQUIVO EM EDLANG
+ 4.0 HELLO WORLD
+ 5.0 IDEIAS QUE SERÃO ADICIONADAS E NOTAS SOBRE O QUE FOI ADICIONADO

# 1.0 SOBRE

if you are a gringo, you will not understand nada sobre esse coiso, va embora

Edlang é um projeto que passa um arquivo (.edl, mas pode ser qualquer extensao) em um codigo escrito em c++ que realiza alguns comandos de acordo com o que tem no arquivo

## 1.1 Sobre o edlang

É uma linguagem que lê palavra por palavra, entao tu pode fazer um codigo em uma linha

Ex.: 

```
Melancia idade 39 Ed: idade
```

esse exemplo cria uma INT chamada IDADE que possui valor 39, depos ele coloca na tela o valor da INT chamada IDADE

(traduzindo para c++) 

```cpp
int idade = 39; std::cout<<idade<<std::endl;
```

# 2.0 COMO USAR NO REPL.IT  [![Run on Repl.it](https://repl.it/badge/github/LucasPB710/EdLang)](https://repl.it/github/LucasPB710/EdLang)

(clicke nesse "run on repl.it")

Voce pode clicar em run, se quiser, ou fazer o que esta abaixo

va no terminal (coiso que geralmente fica no lado direito e tem um fundo preto) e escreva os seguintes comandos:

- make compila [ENTER]
- make run [ENTER]

Aqui vai pedir para voce colocar o nome do arquivo, entao caso voce nao tenha criado o arquivo, pode descer um pouco para ver como criar

Caso voce ja tenha criado, basta colocar o nome dele, se estiver tudo certo, ele vai rodar, caso tenha algo errado, a mensagem de erro vai ser uma bosta pq eu ainda nao corrigi isso :)

Voce pode usar o test.edl para ver o que as coisas fazem (vai mudar com o tempo, conforme a lingua for mudando)

## 2.1 Usando shell no repl.it

pra usar shell é bem simples, no lugar de clicar em run, no terminal do repl.it voce escreve os seguintes comandos:
```
   make shell [ENTER]
   make compila [ENTER] 
   ```
   
para ter um exemplo, basta ver o video no inicio desse arquivo

# 3.0 COMO CRIAR UM ARQUIVO EM EDLANG

Crie um novo arquivo no Repl.it ou qualquer canto, pode ter qualquer extensão ou nenhuma (Ex.: arquivo, arquivo.txt, arquivo.edl...)

Ate agora no edlang a gente so tem essas coisas:

- Melancia -> int

- Ed: -> print

- Lenha -> string

- ValeNada e ValeTudo -> Delimitadores

- Chico+, Chico-, Chico*, Chico/

Funcionam da seguinte maneira

+ ``` Melancia <nome_da_int> <valor_da_int> ```
  
  - (exemplo: Melancia Idade 56)

+ ``` Ed: <nome_da_int> ou <nome_da_string> ```
  
  - (exemplo: Ed: Idade)

OBS: por enquanto, so funciona com int e string, depois poderá ser qualquer variavel)

+ ``` Lenha <nome_da_string> ValeNada <valor_da_string> ValeTudo ```
  
  - (exemplo: Lenha MeuNome ValeNada Parede em construção ValeTudo)
  
  - OBS: entre ValeNada e ValeTudo, pode ter espaços, tendo em vista que uma string pode ter varias palavras

+ ValeNada e ValeTudo
  
  - sao delimitadores (nao sei se esse é o nome certo), ou seja, nao sao algo espécifico, pode ser usados como " "ou ( ) ou { } ou ' ', por ai vai, sendo o caractere da esquerda o ValeNada e o da direita o ValeTudo (nao, isso nao foi baseado em politica). qual dessas coisas eles vao representar pode variar muito em relação ao que voce usa, entao nao ache que seriam correspondentes a apenas () ou " ", eles terão usos diferentes no futuro.
  
+ ``` Chico(operação) <valor1> <valor2> <int_que_vai_guardar_o_resultado> ```
  
  - (exemplo: Chico* 42 73 NumerosBunitos)
  
  - salva o resultado da multipicação de 42 e 73 na int chamada NumerosBunitos

# 4.0 O FAMOSO HELLO WORLD

Hello world em EdLang seria:

```
Lenha My_string ValeNada HELLO EDNALDO PEREIRA ValeTudo

Ed: My_string
```

# 5.0 COISAS QUE SERÃO ADICIONADAS:

(Organizadas por prioridade)

- [X] Matematica (+,-,*,/)

- [ ] IF (estruturado em if then endif / else then endelse)

- [ ] ELSE

- [ ] WHILE

- [ ] FOR
