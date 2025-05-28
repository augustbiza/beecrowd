# 1061 - Tempo de um Evento
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1061.html)

## Lógica
1. Ler uma String e separar os dados(dia, hora, min, seg)
```
dia1, hora1, min1, seg1
dia2, hora2, min2, seg2
```
2. Transforme o tempo(hora,min,seg) em segundos
```
inicio = hora1*3600 + min1*60 + seg1
fim = hora2*3600 + min2*60 + seg2
```
###### Observação: o dia2 sempre será maior que o dia 1 pois estão no mesmo mês
3. Existem 3 casos para analisar: inicio = fim, inicio < fim ou inicio > fim
##### inicio = fim
```
10:00:00 às 10:00:00    
```
Dias = só subtrair o dia2 do dia 1 (dia2 - dia1)  
Horas, min e seg são zero

##### inicio < fim
```
10:30:25 às 17:30:12
```
Dias = só subtrair o dia2 do dia 1 (dia2 - dia1)  
Tempo total = fim - incio (em segundos)  
Horas = tempoTotal/3600  
Minutos = tempoTotal/60  
Segundos = tempoTotal restante

##### inicio > fim
```
10:00:45 às 07:15:51
```
Dias = dia2 - dia1 - 1 (subtrai-se 1 pois não chega a completar um dia completo)  
Tempo total = 24h - incio + fim (tudo em segundos)  
Horas = tempoTotal/3600  
Minutos = tempoTotal/60  
Segundos = tempoTotal restante
### C

### Java