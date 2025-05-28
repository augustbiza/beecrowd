# 1094 - Experiências
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1094.html)

## Observação
Ao ler um inteiro é preciso limpar o buffer do teclado para ler uma String
#### C
```c
int n; char input[10];
scanf("%d", &n); 
getchar();
fgets(input, 10, stdin); 
input[strcspn(input, "\n")] = '\0';
```
#### Java
```java
int n = scan.nextInt(); scan.nextLine();
String str = scan.nextLine();
```