# Comandos

## Lista de comandos

que tu pode usar em um arquivo EdnaldoPP

Obs.: Delimitador = "", (), {}...

Obs.: op = alguma dessas operações: +, -, *, /

Obs.: lembrando que todos esses comandos podem ser escritos com as palavras com letras minusculas, e no lugar de separa-las com outra letra maiuscula, voce pode separa-las com um underline (_)

    Ex.: Jogue x > y SomenteParaGanhar EdP: nome NaoParaPerder 
                                poderia ser:

            jogue x > y somente_para_ganhar edp: nome nao_para_perder

| NOME           | RECEBE                                              | EQUIVALE A    |
|:--------------:| --------------------------------------------------- |:-------------:|
| Melancia       | Float                                               | Int           |
| Ed: / EdP:     | Float ou String                                     | Print         |
| Lenha          | String                                              | String        |
| Vale Nada/Tudo |                                                     | Delimitador   |
| Chico(op)      | Duas Ints ou floats                                 | +, -, * ou /  |
| Jogue          | Uma comparação e o que sera feito caso seja verdade | If            |
| VamosBrilhar   | Comparação e o que sera feito caso seja verdade     | While         |
| DeTorar        | String                                              | str.length()  |
| CocoSeco       | String                                              | reverte a str |
| WhatIsThe:     | String ou float                                     | Input         |


**SFML**

- Bola \<nome> \<raio> \<cor> -> cria uma bola

- Desenha \<nome> -> desenha o objeto que possui o nome

- 
  


### Exemplos:

##### Melancia / Ed:

```php
Melancia 2 DOIS
Ed: DOIS
```

- criamos uma variavel chamada DOIS que armazena o valor 2, em seguida, colocamos o valor na tela

##### Lenha / ValeNada ValeTudo / Ed:

```ruby
Lenha MeuNome ValeNada Ednaldo Pereira ValeTudo
Ed: MeuNome
```

- Cria string chamada MeuNome que tem o calor "Ednaldo pereira" e coloca na tela

##### Chico / Ed:

```ruby
Chico* 42 73 nmrsBunitos
Ed: nmrsBunitos
```

- realiza a operação * (multiplicação), armazena o resultado na int nmrsBunitos e coloca na tela
- Chico+* x y z executaria-> z \*= x*y; tambem poderia ser: Chico+* x y y -> x \*= y;

##### Jogue

```ruby
Melancia Dois 2
Melancia Tres 3
Jogue Dois < Tres SomenteParaGanhar
  Lenha Sussa ValeNada Supimpa ValeTudo
  Ed: Sussa
NaoParaPerder
```

##### VamosBrilhar

```ruby
Melancia t1 4
Melancia total 1
Melancia t2 1
Melancia Qnt 5

VamosBrilhar Qnt > t2 ComoUmDiamante
Chico+* t1 Qnt total
Chico- Qnt 2 Qnt
Chico- t1 2 t1
NessaGeracaoMarcante

Ed: total
```

- vamosBrilhar seria o equivalente a um while

##### WhatIsThe:

```ruby
Lenha nome ValeTudo Seu nome: ValeNada
Ed: nome
WhatIsThe: Brother
Lenha nome ValeTudo seu nome e: ValeNada
Ed: nome EdP: Brother
```

- WhatIsThe recebe o input e armazena na segunda palavra que é passada
  Nesse exemplo, o input que a pessoa fornecerá sera colocado em Brother

##### DeTorar

```ruby
lenha str vale_nada Ola! vale_tudo
de_torar str tamanho
edp: str
```

- DeTorar retorna o tamanho da string que foi dado
