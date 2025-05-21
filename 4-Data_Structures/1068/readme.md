# 1068 - Balanço de Parênteses I
[Enunciado](https://www.beecrowd.com.br/repository/UOJ_1016.html)

## Lógica
A ideia é contar a quantidade de **(** e **)**. Se forem iguais a expressão pode estar correta.  
A variável **paren** vai fazer esse controle, sendo:  
+1 quando **(**  
-1 quando **)**  
Logo, para a expressão estar correta **paren** deve valer 0.  
Existe uma verificação a ser feita: não pode aparecer **)** antes de **(**, ou seja, paren = -1 já invalida.
