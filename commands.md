# Comandos

## Lista de comandos

obs: op = some of these operations: +, -, *, /

| NOME             | RECEBE                                                          | EQUIVALE A   |
|:----------------:| ----------------------------------------------------------------|:------------:|
| Melancia         | Float                                                           | Int          |
| Ed:              | Float or String                                                 | Print        |
| Lenha            | String                                                          | String       |
| Vale Nada/Tudo   |                                                                 | Delimitador  |
| Chico(op)        | Two Ints or floats                                              | +, -, * ou / |
| Jogue            | one comparison that if its true will execute what comes next    | If           |
| VamosBrilhar     | one comparison that while its true will execute what comes next | While        |

### Examples:

##### Melancia / Ed:

```ruby
Melancia 2 DOIS
Ed: DOIS
```

- create a variable called DOIS (two, in portuguese), that holds the value 2, next, we print the value



##### Lenha / ValeNada ValeTudo / Ed:

```ruby
Lenha MeuNome ValeNada Ednaldo Pereira ValeTudo
Ed: MeuNome
```

- Create string called MeuNome (MyName, in portuguese) that holds the value "Ednaldo pereira" then print the value



##### Chico / Ed:

```ruby
Chico* 42 73 nmrsBunitos
Ed: nmrsBunitos
```

- Make the operation * (multiply) with the numbers 42 and 73, then the float nmrsBunitos (beatufil numbers in portuguese) then we print to the screen
- Chico+* x y z, would do z \*= x*y; or Chico+* x y y would do y \*= x;
- the same applies for the other operations (Chico++ x y y -> y += x; Chico+- x y y -> y -= x; Chico+/ x y y -> y /= x)

##### Jogue
```ruby
Melancia two 2
Melancia three 3
Jogue two < three SomenteParaGanhar
  Lenha Sussa ValeNada This is a if  ValeTudo
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

- this program runs VamosBrilhar, that its the same as an while, in the example we calculate the factorial of 5 ( 5! = 120 )
