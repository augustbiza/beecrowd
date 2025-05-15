# 1129 - Optical Reader
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1129.html)

## Lógica
Armazenar as respostas em um array de int
```
[0 | 255 | 255 | 255 | 255] //A

[255 | 15 | 255 | 255 | 24] //*

[200 | 255 | 255 | 126 | 255] //D
```
```java
char resp = '*';
int marcadas = 0;

//código

return resp;
```
**resp** vai guardar a resposta da questão: A,B,C,D,E ou *  
**marcadas** faz o controle de quantas estão marcadas, para verificar se mais de uma forem marcadas na mesma questão
```java
if(prova[i] <= 127) {
    marcadas++;
    if(marcadas == 1) resp = (char)('A' + i);
}
```
Se a questão estiver marcada adiciona um no **marcadas**  
Se a quantidade de marcadas for 1, ou seja, se for a primeira marcada, a resposta vai ser 'A'+ posição da tabela:
```
char: 'A' = 65 ascii

'A' + 0 = 65 + 0 = 65 = A
'A' + 1 = 65 + 1 = 66 = B
'A' + 2 = 65 + 2 = 65 = C
'A' + 3 = 65 + 3 = 65 = D
'A' + 4 = 65 + 4 = 65 = E
```
```java
if(marcadas != 1) resp = '*';
```
Se **nenhuma** for marcada imprime **\***  
Se **mais de uma** forem marcadas ta