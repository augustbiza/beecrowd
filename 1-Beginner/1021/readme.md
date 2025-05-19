# 1021 - Notas e Moedas
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1021.html)

## Lógica
```
NOTAS
100 - 50 - 20 - 10 - 5 - 2

MOEDAS
1 - 0.5 - 0.25 - 0.10 - 0.05 - 0.01
```
Passos  
1. Transformar o valor em centavos
2. Dividir o valor pelo número de centavos correspondente a nota
3. Atualize o valor dos centavos subtraindo o número de centavos vezes seu valor
```
R$ 123.17 = 100 + 20 + 2 + 1 + 0.10 + 0.05 + 2*0.01

123.17 * 100 = 12317 centavos

----NOTAS----
12317 / 10000 = 1  -> 1 nota de 100
12317 - 1*100 = 2317

2317 / 5000 = 0    -> 0 notas de 50
2317 - 0*5000 = 2317

2317 / 2000 = 1    -> 1 nota de 20
2317 - 1*2000 = 317

317 / 1000 = 0

317 / 500 = 0

317 / 200 = 1
317 - 1*200 = 117   -> 1 nota de 2
----MOEDAS---
117 / 100 = 1       -> 1 moeda de 1
117 - 1*100 = 17

17 / 50 = 0

17 / 25 = 0

17 / 10 = 1         -> 1 moeda de 0.1
17 - 1*10 = 7

7 / 5 = 1           -> 1 moeda de 0.05
7 - 1*5 = 2

resto 1             -> 1 moeda de 0.01
```