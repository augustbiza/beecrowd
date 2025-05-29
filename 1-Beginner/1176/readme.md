# 1176 - Fibonacci Array
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1176.html)

## Lógica
1. O dado deve ser do tipo unsigned, que corresponde só a números não negativos podendo armazer números maiores
##### C
```c
unsigned long long dado
```
##### Java
```java
long dado
```
2. O array também deve ser do tipo unsigned e contém as posições 0 a 60 do fibonacci, ou seja, 61 posições
##### C
```c
unsigned long long fibonacci[61];
```
##### Java
```java
long fibonacci[61];
```
3. Preencher o array ja sabendo que as duas primeiras opções são 0 e 1
```c
for(int i = 2; i < 61; i++)
```