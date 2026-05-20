#include "persistencia.hpp"
#include <fstream>

void salvarClientes(std::vector<Cliente*>& clientes) {

    std::ofstream arquivo("clientes.csv");
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para salvar clientes." << std::endl;
        return;
    }

    for (const auto& cliente : clientes) {
        arquivo << cliente->getNome() << ","
                << cliente->getTrabalho() << ","
                << cliente->getLogin() << ","
                << cliente->getSenha() << ","
                << cliente->getTipoDeConta() << ","
                << cliente->getSaldo() << ","
                << cliente->getRendimento() << "\n";
    }

    arquivo.close();

}
void carregarClientes(std::vector<Cliente*>& clientes) {
    std::ifstream arquivo("clientes.csv");

    if (!arquivo.is_open()) {
        std::cout << "Nenhum dado anterior encontrado (clientes.csv).\n";
        return;
    }

    std::string linha;
    while (std::getline(arquivo, linha)) {

        if (linha.empty()) 
            continue; 

        std::istringstream iss(linha);
        std::string nome, trabalho, login, senha, tipoConta;
        double remuneracao, saldo, rendimento;

        if (std::getline(iss, nome, ',') &&
            std::getline(iss, trabalho, ',') &&
            std::getline(iss, login, ',') &&
            std::getline(iss, senha, ',') &&
            std::getline(iss, tipoConta, ',') &&
            iss >> remuneracao  && iss.ignore() &&  
            iss >> saldo        && iss.ignore() &&
            iss >> rendimento)
        {            
            Cliente* c = new Cliente(nome, trabalho, login, senha,
                                     tipoConta, remuneracao,
                                     saldo, rendimento);
            clientes.push_back(c);
        } else {
            std::cerr << "Linha malformada ignorada: " << linha << "\n";
        }
    }

    arquivo.close();
    std::cout << clientes.size() << " cliente(s) carregado(s).\n";
}
