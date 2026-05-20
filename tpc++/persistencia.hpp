#ifndef PERSISTENCIA_HPP
#define PERSISTENCIA_HPP

#include <string>
#include <vector>
#include "cliente.hpp"

void salvarClientes(std::vector<Cliente*>& clientes);

void carregarClientes(std::vector<Cliente*>& clientes);

#endif 