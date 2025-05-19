# 1018 - Cédulas
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1018.html)

## Lógica
```
NOTAS
100 - 50 - 20 - 10 - 5 - 2 - 1
```
Passos  
1. Dividir o dinheiro pelo valor da nota da o número de notas
2. Subtrair o dinheiro pela quantidade de notas vezes seu valor
```
R$ 123 = 100 + 20 + 2 + 1

123 / 100 = 1 -> 1 nota de 100
123 - 1*100 = 23

23 / 50 = 0   -> 0 notas de 50
23 - 0*50 = 0

23 / 20 = 1   -> 1 nota de 20
23 / 1*20 = 3

3 / 5 = 0
3 - 0*5 = 0   -> 0 notas de 5

3 / 2 = 1
3 - 1*2 = 1   -> 1 nota de 2

resto 1       -> 1 nota de 1
```