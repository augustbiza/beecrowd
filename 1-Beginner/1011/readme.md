# 1011 - Esfera
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1011.html)
## Explicação C
```c
#include <math.h>
```
Inclusão da biblioteca **math.h** para usar a função **pow()**
```c
pow(raio, 3);
```
A função **pow(raio, 3)** retorna o valor double de raio^3
```c
(double)4/3
```
Escrever **(double)** na frente de um int transforma o resultado em **double**
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
```cpp
pow(raio, 3);
```
A função **pow(raio, 3)** retorna o valor double de raio^3
```cpp
(double)4/3
```
Escrever **(double)** na frente de um int transforma o resultado em **double**
```cpp
std::cout<<std::fixed<<std::setprecision(5);
```
Qualquer número será escrito com no máximo 5 casas decimais após a vírgula
## Explicação Java
```java
Math.pow(raio, 3);
```
A função **Math.pow(raio, 3)** retorna o valor double de raio^3
```java
(double)4/3
```
Escrever **(double)** na frente de um int transforma o resultado em **double**