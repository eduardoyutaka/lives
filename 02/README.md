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
> Linhas que iniciam com # são diretivas para o pré-processador incluir códigos específicos antes da compilação.
> Nesse caso, inclui-se o iostream para poder realizar operações de input e output.

#### `int main() {`
> Todo programa C++ tem um ponto de início que conveniou-se ser a função `main`.
> Funções são agrupamentos de código que podem ser chamados por um nome, nesse caso o nosso programa inteiro é apenas a função `main`.

#### `std::cout << "Hello World!";`
> É o único _statement_ da função `main`.
> Todo _statement_ em C++ termina com ponto e vígula `;`.
> Nesse statement, a string `"Hello World!"` é um texto delimitado por áspas duplas `"`.
> A string é inserida no `std::cout`, obtido da biblioteca `iostream` e significa _*st*andar*d* *c*haracter *out*put_, ou seja, é escrita na tela do computador.
