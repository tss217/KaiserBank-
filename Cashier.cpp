#include "Cashier.hpp"

Cashier::Cashier(Cpf cpf, std::string nome, float wages):Worker(cpf,nome,wages){
}

float Cashier::bonus()const {
	return getWages() * 0.1;
}