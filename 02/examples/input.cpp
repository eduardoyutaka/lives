#include <iostream>

int main() {
	int ano_de_nascimento;
	int idade;

	std::cout << "Em que ano voce nasceu?" << std::endl;
	std::cin >> ano_de_nascimento;

	idade = 2020 - ano_de_nascimento;

	std::cout << "Voce tem " << idade << " anos.";
}
