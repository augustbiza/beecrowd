# 1160 - Crescimento Populacional
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1160.html)

## Explicação C e C++
```c
ga /= 100;
ga += 1;
```
**ga** recebe a porcentagem de incremento populacional, como 5 (que significa 5%).  
**ga /= 100** transforma ga em porcentagem decimal, que vai de 0 a 1 (5 seria 0,05).  
**ga += 1** transforma ga em um termo que pode ser multiplicado **pa** diretamente (1.05).
```c
gb /= 100;
gb += 1;
```
**gb** recebe o mesmo tratamento que **ga** explicado anteriormente.
```c
bool maisDeCem = false;
```
A variável boolean **maisDeCem** vai ser utilizada para parar as contas quando o tempo passar de cem anos
```c
while(pa <= pb && !maisDeCem)
```
Esse loop fara as contas de quantos anos precisam para a população A (pa) for maior que a B (pb)
```c
pa *= ga;
pb *= gb;
```
Aumento das populações multiplicando-as pelo fator de crescimento (**ga** e **gb**)
```c
ano++;
```
Adiciona 1 à quantidade de anos até que pa supere pb
```c
if(ano > 100) maisDeCem = true;
```
Se a contagem de anos passar de 100 ela deve parar (comando da questão).  
A variavel boolean **maisDeCem** fica true e sai do loop **while(pa <= pb && !maisDeCem)**.


## Explicação Java
```java
boolean maisDeCem = false;
```
A variável boolean **maisDeCem** vai ser utilizada para parar as contas quando o tempo passar de cem anos
```java
ga = scan.nextDouble();
ga /= 100;
ga += 1;
```
**ga** recebe a porcentagem de incremento populacional, como 5 (que significa 5%).  
**ga /= 100** transforma ga em porcentagem decimal, que vai de 0 a 1 (5 seria 0,05).  
**ga += 1** transforma ga em um termo que pode ser multiplicado **pa** diretamente (1.05).
```java
gb = scan.nextDouble();
gb /= 100;
gb += 1;
```
**gb** recebe o mesmo tratamento que **ga** explicado anteriormente.
```java
while(pa <= pb && !maisDeCem)
```
Esse loop fara as contas de quantos anos precisam para a população A (pa) for maior que a B (pb)
```java
pa *= ga;
pb *= gb;
```
Aumento das populações multiplicando-as pelo fator de crescimento (**ga** e **gb**)
```java
ano++;
```
Adiciona 1 à quantidade de anos até que pa supere pb
```java
if(ano > 100) maisDeCem = true;
```
Se a contagem de anos passar de 100 ela deve parar (comando da questão).  
A variavel boolean **maisDeCem** fica true e sai do loop **while(pa <= pb && !maisDeCem)**.