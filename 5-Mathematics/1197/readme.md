# 1197 - Volta à Faculdade de Física
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1197.html)

## Lógica
As váriáveis presente no problema são:
```
Vo (velocidade inicial)
V (velocidade final)
a (aceleração)
t (tempo final)
S (distância)
```
Fórmulas de MUV
```
S = Vo*t + (at^2)/2
a = (V - Vo) / t  ->  V - Vo = at  ->  Vo = V - at
```
O problema pediu a distância no **dobro** do tempo, então:
```
S = Vo*2t + (a(2t)^2)/2
S = Vo*2t + (4at^2)/2

S = Vo*2t + 2at^2
Substituindo Vo na primeira equação
```
S = (V - at)*2t + 2at^2
S = 2Vt - 2at^2 + 2at^2

S = 2Vt (formula final)
```

