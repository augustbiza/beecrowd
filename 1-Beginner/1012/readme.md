# 1012 - Área
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1012.html)
## Explicação C
```c
#include <math.h>
```
Inclusão da biblioteca **math.h** para usar a função **pow()**
```c
printf("CIRCULO: %.3lf\n", 3.14159 * pow(c, 2));
```
A função **pow(c, 2)** retorna o valor double de c^2
```c
printf("QUADRADO: %.3lf\n", pow(b, 2));
```
A função **pow(b, 2)** retorna o valor double de b^2
## Compilar o código em C no Terminal
adicione **-lm** ao final do comando de compilação
```
gcc bee1012.c -o exe -lm (compile)
./exe (run)
```

## Explicação C++
```cpp
#include <iomanip>
```
Inclusão da biblioteca **iomanip** para manipular as casas decimais
```c
#include <cmath>
```
Inclusão da biblioteca **cmath** para usar a função **pow()**
```cpp
std::cout<<std::fixed<<std::setprecision(3);
```
Qualquer número será escrito com no máximo 3 casas decimais após a vírgula
```cpp
std::cout<<"CIRCULO: "<< 3.14159 * pow(c, 2)<<std::endl;
```
A função **pow(c, 2)** retorna o valor double de c^2
```cpp
std::cout<<"QUADRADO: "<< pow(b, 2)<<std::endl;
```
A função **pow(b, 2)** retorna o valor double de b^2

## Explicação Java
```java
System.out.printf("CIRCULO: %.3f\n", 3.14159 * Math.pow(c, 2));
```
A função **Math.pow(c, 2)** retorna o valor double de c^2
```java
System.out.printf("QUADRADO: %.3f\n", Math.pow(b, 2));
```
A função **Math.pow(b, 2)** retorna o valor double de b^2