#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <string>
#include<iostream>

class Pessoa
{
private:
    std::string login;
    std::string senha;

public:
    std::string nome;
    std::string trabalho;

    Pessoa(std::string nome, std::string trabalho, std::string login, std::string senha);
    ~Pessoa(){}

    void exibirDados();

    void setTrabalho(std::string trabalho);
    std::string getTrabalho() const;
};

#endif