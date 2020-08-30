# Comandos

## Lista de comandos

obs: op = some of these operations: +, -, *, /

| NAME             | RECEIVE                                                         | SAME AS        |
|:----------------:| ----------------------------------------------------------------|:--------------:|
| Melancia         | Float                                                           | Int            |
| Ed:              | Float or String                                                 | Print          |
| Lenha            | String                                                          | String         |
| Vale Nada/Tudo   |                                                                 | Delimitador    |
| Chico(op)        | Two Ints or floats                                              | +, -, * ou /   |
| Jogue            | one comparison that if its true will execute what comes next    | If             |
| VamosBrilhar     | one comparison that while its true will execute what comes next | While          |
| WhatIsThe: (name)| user input, can be string or float                              | Input, std::cin|

### OBS: Ed:

Ed: prints just what is given to him, you cannot say something like "Ed: name \n" to have a new line, the equivalent of Ed: \n would be EdP:
EdP: prints what is given to him plus a new line at the end

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

##### WhatIsThe: 
```ruby
Lenha name ValeNada Whats your name? : ValeTudo
Ed: name
WhatIsThe: Brother
Lenha name ValeNada Your name is: ValeTudo
Ed: name Ed: Brother
```
- in this example we have Brother, that will be what the user types, can be a float (if he types a number) or a string (if he types a string)
