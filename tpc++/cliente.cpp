#include "cliente.hpp"

// costrutor
Cliente::Cliente(std::string nome, std::string trabalho,
                 std::string login, std::string senha,
                 std::string tipoDeConta, double remuneracao,
                 double saldo, double taxaDeRendimento)
{
    Pessoa(nome, trabalho, login, senha);
    this->tipoDeConta = tipoDeConta;
    this-> remuneracao = remuneracao;
    this-> saldo = saldo;
    this-> taxaDeRendimento = taxaDeRendimento;
}


void Pessoa::exibirDados()
{

    std::cout << "nome: " << nome << "\n"
              << "trabalho: " << trabalho << "\n";
}