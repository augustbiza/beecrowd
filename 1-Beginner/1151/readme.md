# 1151 - Fibonacci Fácil
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1151.html)

## Lógica
1. Os primeiros dois números são impressos individualmente(0 e 1)
2. O for retira esses dois
```c
for(; qt > 2; qt--)
```

## Observação
O beecrowd pede que o último número não tenha um espaço após ele.  
Caso esse detalhe não seja importante aqui está a resolução "padrão" do fibonacci

```java
int n1 = 0, n2 = 1, n3;
        
System.out.print(n1 + " " + n2 + " ");
for(; qt > 2; qt--) {
            
    n3 = n1+n2;
    System.out.print(n3 + " ");
            
    n1 = n2; n2 = n3;
} System.out.println();
```