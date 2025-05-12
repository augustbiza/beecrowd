# 1091 - Divisão da Nlogônia
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1091.html)

## Lógica
Imagine um Plano Cartesiano:
```     
          N
         (y)
          ^
          |
          |
O ------(0,0)-----> (x) E
          |
          |
          |
          S
```
x = 0 e y = 0 : origem  
x = 0 ou y = 0 : divisa  
x > 0 e y > 0 : NE  
x > 0 e y < 0 : SE  
x < 0 e y > 0 : NO  
x < 0 e y < 0 : SO  
Como o ponto de divisão(origem) é dado a cada rodada, basta substituir o '0' pelo seu correspondente em 'x' e 'y'.  
origem (2,-4)
```
          N
         (y)
          ^
          |
          |
O -----(+2,-4)-----> (x) E
          |
          |
          |
          S
```
x = 2 e y = -4 : origem  
x = 2 ou y = -2 : divisa  
x > 2 e y > -4 : NE  
x > 2 e y < -4 : SE  
x < 2 e y > -4 : NO  
x < 2 e y < -4 : SO  