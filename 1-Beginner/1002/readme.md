# 1002 - Área do Círculo
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1002.html)
## Explicação C
```c
#include <math.h>
```
Inclusão da biblioteca **math.h** para usar a função de potência
```c
pow(raio, 2)
```
A função **pow()** retorna raio elevado a 2
### Observação
Para compilar o código em c no terminal é preciso incluir o comando **-lm** ao final
```
gcc main.c -o exec -lm (compilar)
./exec (rodar)
```

## Explicação C++
```cpp
#include <cmath>
#include <iomanip>
```
Inclusão da biblioteca **cmath** para usar a função de potência  
Inclusão da biblioteca **iomanip** para manipular a quantidade de casas decimais
```cpp
std::cout<<std::fixed<<std::setprecision(4);
```
Qualquer impressão terá no máximo **4 casas decimais** após a vírgula
```cpp
pow(raio, 2)
```
A função **pow()** retorna raio elevado a 2

## Explicação Java
```java
Math.pow(raio, 2)
```
**Math** é uma classe que não precisa ser importada  
**Math.pow** retorna um double equivalente à raio elevado a 2
```java
System.out.printf("A=%.4f\n", areaCirculo);
```
Uso do **printf** ao invés do println para poder controlar o número de casas fracionárias  
**%.4f** retorna um double com 4 casas após a vírgula