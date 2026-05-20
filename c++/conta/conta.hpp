#ifndef CONTA_HPP
#define CONTA_HPP
#include <string>

class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    Data(int dia, int mes , int ano);
    ~Data();
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);

    int getDia();
    int getMes();
    int getAno();
};

class Cliente
{

private:
    std::string nome;
    std::string endereco;
    int cpf;

public:
    Cliente(std::string nome, std::string endereco, int cpf);
    int getCpf();
    std::string getEndereco();
    std::string getNome();

    void setCpf(int dia);
    void setNome(std::string nome);
    void setEndeco(std::string endereco);
};

class Conta
{
public:
    int numConta;
    int saudo;
    Cliente contarentista;// composica
    Data data;

private:
    bool depositar(double depodito);
    bool sague(double saque);
    bool transferencia(Conta X, double valor);


};

#endif
