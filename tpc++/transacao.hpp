#ifndef TRANSACAO_HPP
#define TRANSACAO_HPP
#include <string>
#include<iostream>
#include <vector>
#include <sstream>

class Cliente;

class Transacao
{
private:
    /* data */
    std::string tipo;
    double valor;
    std::string data;
    std::string horario;
    std::vector<Cliente*> clientesEnvolvidos;

public:
    Transacao(std::string tipo, double valor, std::string data, std::string horario);
    ~Transacao();

    std::string getTipo() const;

    double getValor() const;
    void setValor(double valor);

    std::string getData() const;
    void setData(std::string data);

    std::string getHorario() const;
    void setHorario(std::string horario);

    const std::vector<Cliente*>& getClientesEnvolvidos() const; 
    void adicionarCliente(Cliente* cliente); 

    virtual void exibirTransacao();
    std::string paraCSV() const;
};

#endif
