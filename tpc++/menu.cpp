#include "menu.hpp"

Menu::Menu(){};
void Menu::exibirMenu()
{

    std::cout << "\n====== SISTEMA DE GERENCIAMENTO DE BANCO ======\n";
    std::cout << "1. Cadastrar cliente\n";
    std::cout << "2. Cadastrar gerente\n";
    std::cout << "3. Criar transacao\n";
    std::cout << "4. Exibir extrato de um cliente\n";
    std::cout << "5. Associar gerente a cliente\n";
    std::cout << "6. Listar clientes\n";
    std::cout << "7. Listar gerentes\n";
    std::cout << "8. Salvar dados e sair\n";
    std::cout << "==================================================\n";
    std::cout << "Opcao: ";
    
}