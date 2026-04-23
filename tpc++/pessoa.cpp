#include "pessoa.hpp"

// costrutor
Pessoa::Pessoa(std::string nome, std::string trabalho, std::string login, std::string senha)
{
    this->nome = nome;
    this->trabalho = trabalho;
    this->login = login;
    this->senha = senha;
}
std::string Pessoa::getTrabalho() const
{
    return trabalho;
}
void Pessoa::setTrabalho(std::string trabalho)
{
    this->trabalho = trabalho;
}

void Pessoa::exibirDados()
{

    std::cout << "nome: " << nome << "\n"
              << "trabalho: " << trabalho << "\n";
}