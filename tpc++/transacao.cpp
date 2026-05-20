#include "transacao.hpp"  
#include <sstream>  

Transacao::Transacao(std::string tipo, double valor,
                     std::string data, std::string horario)
    : tipo(tipo), valor(valor), data(data), horario(horario)
{}

std::string Transacao::getTipo() const
{
    return tipo;
}

double Transacao::getValor() const 
{
    return valor;
}

void Transacao::setValor(double valor) {
    this->valor = valor;
}

std::string Transacao::getData() const {
    return data;
}

void Transacao::setData(std::string data) {
    this->data = data;
}

std::string Transacao::getHorario() const {
    return horario;
}

void Transacao::setHorario(std::string horario) {
    this->horario = horario;
}

const std::vector<Cliente*>& Transacao::getClientesEnvolvidos() const {
    return clientesEnvolvidos;
}

void Transacao::adicionarCliente(Cliente* cliente) {
    clientesEnvolvidos.push_back(cliente);
}

void Transacao::exibirTransacao() {
    std::cout << "Tipo: " << tipo << "\n"
              << "Valor: " << valor << "\n"
              << "Data: " << data << "\n"
              << "Horario: " << horario << "\n";
}

std::string Transacao::paraCSV() const {
    std::stringstream ss;
    ss << tipo << "," << valor << "," << data << "," << horario;
    return ss.str();
}