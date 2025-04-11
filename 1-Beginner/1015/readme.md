# 1015 - Distância Entre Dois Pontos
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1015.html)


## Explicação C
```c
#include <math.h>
```
Inclusão da biblioteca **math.h** para utilizar a função **pow()** e **sqrt()**
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
std::cout<<std::fixed<<std::setprecision(4);
```
Qualquer número será escrito com no máximo 4 casas decimais após a vírgula
```cpp
#include <cmath>
```
Inclusão da biblioteca **math.h** para utilizar a função **pow()** e **sqrt()**