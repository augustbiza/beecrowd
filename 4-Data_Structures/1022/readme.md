# 1022 - TDA Racional
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1022.html)

## Lógica
A ideia é ler a entrada como uma string e separar os dados:
```
string = n1 op1 d1 op n2 op2 d2
```

Para separar a string nos campos
### Java
```java
String input = scanner.nextLine();
String[] partes = input.split(" ");

n1 = Integer.parseInt(partes[0]);           //int
op1 = partes[1].charAt(0);                  //char
d1 = Integer.parseInt(partes[2]);           //int

op = partes[3].charAt(0);                   //char

n2 = Integer.parseInt(partes[4]);           //int
op2 = partes[5].charAt(0);                  //char
d2 = Integer.parseInt(partes[6])            //int 
```
### C
```c
char input[50];
fgets(input, 50, stdin);
input[strcspn(input, "\n")] = '\0';

sscanf(input, "%d %c %d %c %d %c %d", &n1, &op1, &d1, &op, &n2, &op2, &d2);
```