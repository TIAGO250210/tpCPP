#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "pessoa.hpp"
#include "transacao.hpp"
#include <vector>
#include <iostream>


class Cliente : public Pessoa
{
private:
    std::string tipoDeConta;
    double remuneracao;
    double saldo;
    double taxaDeRendimento;
    std::vector<Transacao *> transacoes;

public:
    Cliente(std::string nome, std::string trabalho,
            std::string login, std::string senha,
            std::string tipoDeConta, double remuneracao,
            double saldo, double taxaDeRendimento);
    ~Cliente() {}

    void setTransacao(const std::vector<Transacao *> &transacoes);
    const std::vector<Transacao *> &getTransacao() const;
    bool addTransacao(Cliente* clienteDestino, double valor);
   
    std::string getTipoDeConta() const;
    void setTipoDeConta(std::string tipo);
   
    double getRemuneracao() const;      
    void setRemuneracao(double rem);
    
    double getSaldo() const;
    void setSaldo(double saldo);

    double getRendimento() const;
    void setRendimento(double rendimento);

    
    friend std::ostream& operator<<(std::ostream& out, const Cliente& obj);
    void exibirDados() override;
};

#endif