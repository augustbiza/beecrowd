# 1009 - Salário com Bônus
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1009.html)
## Explicação C
```c
char* nome = malloc(sizeof(char)*15);
```

```c
fgets(nome, 15, stdin);
```

```c
free(nome);
```
## Explicação C++
```cpp
#include <iomanip>
```
Inclusão da biblioteca **iomanip** para manipular as casas decimais
```cpp
#include <string>
```
Inclusão da biblioteca **string** para utilizar string ao invés de char-array
```cpp
std::getline(std::cin, nome);
```
A função **getline()** funciona como um fgets
```cpp
std::cout<<std::fixed<<std::setprecision(5);
```
Qualquer número será escrito com no máximo 5 casas decimais após a vírgula