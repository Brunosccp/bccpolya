<script type="text/javascript" src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS_HTML"></script>


### Descrição

Foi proposto fazer uma função em linguagem C que calcula uma aproximação de uma raiz quadrada de um número real sem utilizar o comando sqrt() ou o pow(), da biblioteca math.h.

###Solução matemática:

<script type="text/javascript" src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?con.."></script>

A expressão abaixo consegue uma aproximação da raiz quadrada:
Inicialmente, r e n são o mesmo número, ambos o número que queremos a sua raiz.
$$r = \frac{x}{2} + \frac{n}{2x}$$
Ao resolver a expressão temos o primeiro número, é uma aproximação não precisa da raiz, devido a isso há a necessidade de atribuir o valor de r a x na expressão, mantendo o n, e então, o novo r terá um valor mais próximo da raiz do número. Quanto mais vezes repetir a expressão, mais preciso o valor da raiz.

####Exemplificação:

Nesse exemplo chegarei a uma aproximação da raiz de 9:

Substituindo os valor n e r por 9, temos a expressão da seguinte maneira:

$$x = \frac{9}{2} + \frac{9}{2.9}$$
E então chegaremos a $x = 5$. Então agora substituindo x pelo r, para chegar a raiz com uma maior precisão:

$$r = \frac{5}{2} + \frac{9}{2.5}$$
Dessa vez chegaremos a $x = \frac{17}{5}$ que é também 3,4 então substituiremos x por r novamente

$$r = \frac{3,4}{2} + \frac{9}{2.3,4}$$
Então finalmente chegaremos a $x = 3,02353$, que se considerarmos somente a parte inteira o resultado já satisfaz, ao substituir novamente x por r, já teremos uma precisão melhor ainda, com a parte inteira e os próximos 4 algarismos decimais corretos:

$$r = \frac{3,02353}{2} + \frac{9}{2.3,02353} $$

Chegaremos a $x = 3.00009$.

###Solução Português Estruturado:

01|**Aproximação de Raízes**  
02|**Varíaveis**  
03|raiz: **Ponto Flutuante**  
04|**Início**  
05|**Variaveis**  
06|x: **Ponto Flutuante**  
07|**Imprimir** "Insira o número:";  
08|**Ler** x;  
09|**Imprimir** "Raiz: ,raiz(x);  
10|raiz: **Ponto Flutuante** **parâmetro** x **Ponto Flutuante**;  
11|**Variaveis**  
12|l: **Inteiro**;  
13|xp: **Ponto Flutuante**;  
14|xp $\leftarrow$x;  
15|**Para** l menor que 100, l sendo 0, incremente l  
16|xp=xp/2 + x/(2*xp);  
17|**Retornar** a xp;  

###Solução Fluxograma:

```flow
st=>start: Main
e=>end
op1=>operation: Ler x
op2=>operation: l=0
op3=>operation: Imprimir Raiz
cond=>condition: l<100?
sub1=>subroutine: xp=xp/2 + x/(2*xp)

st->op1->op2->cond
cond(no)->op3->e
cond(yes)->sub1->cond
```

###Justificativa Polya:
É uma analogia aos alunos com George Polya, pois Polya escreveu um livro sobre a arte de resolver problemas, e nós alunos estamos arrumando uma forma de resolver este problema.

	
