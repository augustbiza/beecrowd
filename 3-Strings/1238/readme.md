# 1238 - Combinador
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1238.html)

## Lógica
A ideia é pegar duas strings e concatenar alternando-as em um nova string  
Vamos utilizar dois tipos de variáveis: **posição da nova String** e **tamanho das outras strings**
Estrutura
```
string a;               (valor)
tamA;                   (tamanho da string)
pA;                     (indice atual da string)

string b;               (valor)
tamB;                   (tamanho da string)
pB;                     (indice atual da string)


string nova;
p                       (indice atual da string)
```
Condição de parada: percorrer toda a string a e b
```java
while(pA < tamA || pB < tamB)
```
Exemplo:
```
string a = AAAAA    pA = 0  tamA = 5
string b = BB       pB = 0  tamB = 2
string nova = ""    
```
Rodada 1
```
string a = AAAAA    pA = 1  tamA = 5
string b = BB       pB = 0  tamB = 2
string nova = A    
```
Rodada 2
```
string a = AAAAA    pA = 1  tamA = 5
string b = BB       pB = 1  tamB = 2
string nova = AB    
```
Rodada 3
```
string a = AAAAA    pA = 2  tamA = 5
string b = BB       pB = 1  tamB = 2
string nova = ABA    
```
Rodada 4
```
string a = AAAAA    pA = 2  tamA = 5
string b = BB       pB = 2  tamB = 2
string nova = ABAB    
```
Rodada 5
```
string a = AAAAA    pA = 3  tamA = 5
string b = BB       pB = 2  tamB = 2
string nova = ABABA    
```
Rodada 6
```
string a = AAAAA        pA = 4  tamA = 5
string b = BB           pB = 2  tamB = 2
string nova = ABABAA    
```
Rodada 5
```
string a = AAAAA        pA = 5  tamA = 5
string b = BB           pB = 2  tamB = 2
string nova = ABABAAA    
```