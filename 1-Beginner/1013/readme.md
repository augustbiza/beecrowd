# 1013 - O Maior
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1013.html)




## Explicação C
```c
#include <stdlib.h>
```
Inclusão da biblioteca **stdlib.h** para utilizar a função **abs()**
```c
maior = (a+b + abs(a-b))/2;
```
Essa fórmula indica o maior entre dois números
```c
abs(a-b)
```
A função **abs(a-b)** retorna o double valor absoluto entre **a** e **b**
```c
abs(maior-c)
```
A função **abs(maior-c)** retorna o double valor absoluto entre **maior** e **c**


## Explicação C++
```cpp
#include <cmath>
```
Inclusão da biblioteca **cmath** para utilizar a função **abs()**
```cpp
maior = (a+b + abs(a-b))/2;
```
Essa fórmula indica o maior entre dois números
```cpp
abs(a-b)
```
A função **abs(a-b)** retorna o double valor absoluto entre **a** e **b**
```cpp
abs(maior-c)
```
A função **abs(maior-c)** retorna o double valor absoluto entre **maior** e **c**


## Explicação Java
```java
maior = (a+b + Math.abs(a-b))/2;
```
Essa fórmula indica o maior entre dois números
```java
Math.abs(a-b)
```
A função **Math.abs(a-b)** retorna o double valor absoluto entre **a** e **b**
```java
Math.abs(maior-c)
```
A função **Math.abs(maior-c)** retorna o double valor absoluto entre **maior** e **c**