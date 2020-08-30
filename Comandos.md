# Comandos

## Lista de comandos

que tu pode usar em um arquivo EdnaldoPP



obs: Delimitador = "", (), {}...

obs: op = alguma dessas operações: +, -, *, /

| NOME           | RECEBE                                               | EQUIVALE A   |
|:--------------:| -----------------------------------------------------|:------------:|
| Melancia       | Float                                                | Int          |
| Ed:            | Float ou String                                      | Print        |
| Lenha          | String                                               | String       |
| Vale Nada/Tudo |                                                      | Delimitador  |
| Chico(op)      | Duas Ints ou floats                                  | +, -, * ou / |
| Jogue          | Uma comparação e o que sera feito caso seja verdade  | If           |
| VamosBrilhar   | Comparação e o que sera feito caso seja verdade      | While        |

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
