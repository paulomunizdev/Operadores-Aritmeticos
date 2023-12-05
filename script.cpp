#include <iostream>

int main() {
    // Declaração de variáveis
    int a = 10;
    int b = 5;

    // Operadores Aritméticos

    // Adição
    int soma = a + b;

    // Subtração
    int subtracao = a - b;

    // Multiplicação
    int multiplicacao = a * b;

    // Divisão inteira
    int divisao = a / b;

    // Divisão de ponto flutuante
    float divisaoFloat = static_cast<float>(a) / b;

    // Resto da divisão
    int resto = a % b;

    // Exibir resultados

    // Adição
    std::cout << "a + b = " << soma << std::endl;

    // Subtração
    std::cout << "a - b = " << subtracao << std::endl;

    // Multiplicação
    std::cout << "a * b = " << multiplicacao << std::endl;

    // Divisão inteira
    std::cout << "a / b (inteira) = " << divisao << std::endl;

    // Divisão de ponto flutuante
    std::cout << "a / b (ponto flutuante) = " << divisaoFloat << std::endl;

    // Resto da divisão
    std::cout << "a % b = " << resto << std::endl;

    return 0;
}
