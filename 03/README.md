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

> Um _statement_ é cada instrução individual em um programa.

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

## Estrutura de um programa C++

```C++
// meu primeiro programa em C++
#include <iostream>

int main() {
   std::cout << "Hello World!";
}
```

### Examinando o programa linha por linha

#### `// meu primeiro programa em C++`
> O símbolo `//` indica um comentário no código para ajudar a entendê-lo e todos os comentários são ignorados pelo compilador.

#### `#include <iostream>`
> Linhas que iniciam com `#` são diretivas para o pré-processador incluir códigos específicos antes da compilação.
> Nesse caso, inclui-se o `iostream` para poder realizar operações de input e output.

#### `int main() {`
> Todo programa C++ tem um ponto de início que convencionou-se ser a função `main`.
> Funções são agrupamentos de código que podem ser chamados por um nome, nesse caso o nosso programa inteiro é apenas a função `main`.

#### `std::cout << "Hello World!";`
> É o único _statement_ da função `main`.
> Todo _statement_ em C++ termina com ponto e vígula `;`.
> Nesse statement, a string `"Hello World!"` é um texto delimitado por áspas duplas `"`.
> A string é inserida no `std::cout`, obtido da biblioteca `iostream` e significa _*st*andar*d* *c*haracter *out*put_, ou seja, é escrita na tela do computador.

## Variáveis e tipos

#### Para que servem as variáveis?

> Variáveis contém as informações do seu programa.
> É possível realizar operações nas variáveis para modificar seus valores.

```C++
// idade.cpp
#include <iostream>

int main() {
	int idade = 26;

	std::cout << "Esse ano eu fiz ";
	std::cout << idade;
	std::cout << " anos" << std::endl;

	idade = 27;

	std::cout << "Ano que vem eu vou ter " << idade << " anos";
}
```

> Note que a idade nesse caso é um número inteiro (de 0 a N).
> Variáveis do tipo inteiro são representados com a palavra-chave `int`.

#### Tipos básicos

> Existem diversos tipos básicos para representar variáveis, sendo eles tipos numéricos, textuais, verdadeiro-falso ou tipos customizados.
> Iremos apresentar novos tipos conforme a necessidade deles, mas para uma lista completa visite [esse link](https://www.cplusplus.com/doc/tutorial/variables/).

## Input vs Output

> A execução de um programa pode ser vista como um diálogo.
> O input é uma informação que é enviada ao programa.
> O output é uma informação que é recebida do programa.

#### Exemplo de um diálogo em uma caixa de email

- output do programa: você têm 10 emails não lidos, o que deseja fazer?
- input do usuário: abra o primeiro email não lido.
- output do programa: esse é o conteúdo do primeiro email não lido, o que deseja fazer?
- input do usuário: delete esse email.
- output do programa: você têm 9 emails não lidos, o que deseja fazer?

```C++
// input vs output
#include <iostream>

int main() {
  int ano_de_nascimento;
  int idade;

  std::cout << "Em que ano você nasceu?";
  std::cin >> ano_de_nascimento;

  idade = 2020 - ano_de_nascimento;

  std::cout << "Você têm " << idade << " anos.";
}
```

## Problemas

1. [Extremamente Básico](https://www.urionlinejudge.com.br/judge/pt/problems/view/1001)
2. [Área do Círculo](https://www.urionlinejudge.com.br/judge/pt/problems/view/1002)
2. [Média 1](https://www.urionlinejudge.com.br/judge/pt/problems/view/1005)

## Pratique

3. [Soma Simples](https://www.urionlinejudge.com.br/judge/pt/problems/view/1003)
1. [Produto Simples](https://www.urionlinejudge.com.br/judge/pt/problems/view/1004)
3. [Média 2](https://www.urionlinejudge.com.br/judge/pt/problems/view/1006)
