#include "cliente.hpp"

Cliente::Cliente(std::string nome, std::string trabalho,
                 std::string login, std::string senha,
                 std::string tipoDeConta, double remuneracao,
                 double saldo, double taxaDeRendimento)
    : Pessoa(nome, trabalho, login, senha) 
{
    this->tipoDeConta      = tipoDeConta;
    this->remuneracao      = remuneracao;
    this->saldo            = saldo;
    this->taxaDeRendimento = taxaDeRendimento;
}

std::string Cliente::getTipoDeConta() const {
    return tipoDeConta;
}
void Cliente::setTipoDeConta(std::string tipo) {
    this->tipoDeConta = tipo;
}

double Cliente::getRemuneracao() const {
    return remuneracao;
}
void Cliente::setRemuneracao(double rem) {
    this->remuneracao = rem;
}

double Cliente::getSaldo() const {
    return saldo;
}
void Cliente::setSaldo(double saldo) {
    this->saldo = saldo;
}

double Cliente::getRendimento() const {
    return taxaDeRendimento;
}
void Cliente::setRendimento(double rendimento) {
    this->taxaDeRendimento = rendimento;
}

const std::vector<Transacao*>& Cliente::getTransacao() const {
    return transacoes;
}
void Cliente::setTransacao(const std::vector<Transacao*>& t) {
    this->transacoes = t;
}

void Cliente::exibirDados() {
    std::cout << "Nome:         " << getNome()        << "\n"
              << "Trabalho:     " << getTrabalho()    << "\n"
              << "Login:        " << getLogin()       << "\n"
              << "Tipo de conta:" << tipoDeConta      << "\n"
              << "Remuneracao:  " << remuneracao      << "\n"
              << "Saldo:        " << saldo            << "\n"
              << "Rendimento:   " << taxaDeRendimento << "\n";
}

std::ostream& operator<<(std::ostream& out, const Cliente& obj) {
    out << "Cliente: " << obj.getNome()
        << " | Conta: " << obj.tipoDeConta
        << " | Saldo: " << obj.saldo;
    return out;
}