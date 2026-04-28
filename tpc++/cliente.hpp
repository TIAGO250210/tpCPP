#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "pessoa.hpp"
#include "transacao.hpp"
#include <vector>

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
    bool addTransacao();
    std::string getTipoDeConta();
    void setTipoDeConta(std::string tipo);
    double getSaldo() const;
    void setSaldo(double saldo);
    double getRendimento() const;
    void setRendimento(double rendimento);
    friend ostream& operator<<(ostream& out, const Cliente& obj);
    void exibirDados() override;
    bool addtransacao(Cliente* clienteDestino, double valor);



};
#endif