## Objetivos

- Conhecer os operadores mais comuns no C++
- Introdução à arquitetura de von Neumann e o conceito de _stored-program computer_
- Definição simplificada de um programa
- Definição de _statement_ e controle de fluxo

#### Link da live 27/03/2020

- `TODO`

## O que é uma operação?

> Uma operação (ou expressão) é uma sequência de operadores e operandos que definem uma computação.

```C++
// Operações aritméticas (+, -, *, /, %)
2 + 2   // operador de soma;          resultado: 4
5 - 3   // operador de subtração;     resultado: 2
10 / 5  // operador de divisão;       resultado: 2
3 * 3   // operador de multiplicação; resultado: 9
9 % 2   // operador de modulo;        resultado: 1

// Operações de igualdade e relacionais (==, !=, >, <, >=, <=)
7 == 5  // operador de igualdade;         resultado: false
5 > 4   // operador de maior que;         resultado: true
3 != 2  // operador de não igual a;       resultado: true
6 >= 6  // operador de maior ou igual a;  resultado: true
5 < 5   // operador de menor que;         resultado: false

// Operações lógicas (!, &&, ||)

// Operação de negação
!true   // resultado: false
!false  // resultado: true 

// Operação de E
true && true    // resultado: true
true && false   // resultado: false
false && true   // resultado: false
false && false  // resultado: false

// Operação de OU 
true || true    // resultado: true
true || false   // resultado: true
false || true   // resultado: true
false || false  // resultado: false
```

#### Operações lógicas na vida real

> Só vou para o parque se for domingo **E** fizer Sol.  
> Só peço desculpas se me pagarem **OU** se minha mãe mandar.

## Arquitetura de von Neumann e o _stored-program computer_

![arquitetura de von neumann](https://upload.wikimedia.org/wikipedia/commons/e/e5/Von_Neumann_Architecture.svg)

A arquitetura de von Neumann descreve um computador digital com os seguintes componentes:

- Memória que armazena dados e instruções (RAM)
- Uma unidade de controle que contém um registrador de instrução e o contador de programa (PC)
- Uma unidade de processamento (CPU) que contém uma unidade de lógica aritmética (ALU) e registradores
- Armazenamento em massa externo (HD, SSD, etc.)
- Mecanismos de input e output (teclado, mouse, monitor, etc.)

Essa arquitetura é uma das variações do _stored-program computer_, no qual os dados e as instruções são armazenados na memória.  
Ou seja, um _stored-program computer_ pode ser reprogramado, bastando colocar nova instruções e dados na memória.

## Definição simplificada de um programa

Um programa em execução, portanto, é uma sequência de instruções que residem na memória e atuam sobre dados que também residem na memória.

> Exemplo: Colocar um CD-ROM no leitor coloca o programa designado na memória e começa a executar as instruções em sequência.

## O que é um _statement_

Um _statement_ é cada instrução individual em um programa.

```C++
// Exemplos de statements
// Declarações, assignments e inicializações
int main() {
  int x;      // declaração
  x = 2;      // assignment
  int y = 3;  // inicialização
  y = x;      // assignment
}
```

## Controle de fluxo

Durante a execução de um programa, o fluxo das instruções pode ser controlado.  
O _statement_ goto do C++ faz uma bifurcação incondicional para um endereço marcado por um _label_.

```C++
// goto.cpp
#include <iostream>

using namespace std;

int main() {
  goto primeiro;

segundo:
  cout << "segundo" << endl;
  goto terceiro;

primeiro:
  cout << "primeiro" << endl;
  goto segundo;

terceiro:
  cout << "terceiro" << endl;
}
```

Um dos maiores poderes da programação é poder executar tarefas repetidas rapidamente.  
O uso de bifurcaçoes condicionais permite a especificação de o que o programa deve fazer, quantas vezes, quando, e em quais circunstâncias.

```C++
// loop.cpp
#include <iostream>

using namespace std;

int main() {
  int x = 0;
  
begin:
  if (x > 0) goto end;
  cout << x << endl;
  x = x + 1;
  goto begin;
end:
  cout << "lá vou eu!";
}
```

> O uso do goto foi apresentado como perigoso no artigo [Edgar Djikstra: Go To Statement Considered Harmful](https://homepages.cwi.nl/~storm/teaching/reader/Dijkstra68.pdf).  
> Portanto, uma maneira mais disciplinada de se realizar controle de fluxo em linguagens de programações modernas é por meio de _statements_ de controle de fluxo.        
> A presença de _statements_ de controle de fluxo em uma linguagem de programação a caracteriza como uma linguagem de programação *estruturada*.

O paradigma de programação estruturado deriva do teorema do programa estruturado que diz que qualquer programa pode ser escrito com apenas o uso de três estruturas de controle:

- Execução sequencial do código
- Execução do código de acordo com o value de uma expressão booleana (verdadeiro/falso)
- Execução repetida do código enquanto uma expressão booleana for verdadeira (iteração)

#### _if statement_

O _if statement_ executa uma bifurcação do código caso a condição avalie como verdadeira (true).
Ele pode ser acompanhado por uma cláusula _else_ contendo o código a ser executado caso a condição avalie como false (false).

```C++
// if.cpp
#include <iostream>

using namespace std;

int main() {
  bool quarentena = true;

  if (quarentena) {
    cout << "Não é para sair de casa!" << endl;
  } else {
    cout << "Pode sair de casa :)" << endl;
  }
}
```

#### _while statement_

O _while statement_ 
