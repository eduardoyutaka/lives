## Estrutura de um programa

```c++
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
> Nesse caso, inclui-se o iostream para poder realizar operações de input e output.

#### `int main() {`
> Todo programa C++ tem um ponto de início que conveniou-se ser a função `main`.
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
#include <iostream>

int main() {
  int idade = 26;

  std::cout << "Esse ano eu fiz ";
  std::cout << idade;
  std::cout << " anos";

  idade = 27;

  std::cout << "Ano que vem eu vou ter" << idade << " anos";
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
