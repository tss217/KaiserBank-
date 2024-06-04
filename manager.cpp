#include "manager.hpp"

manager::manager(Cpf cpf, std::string nome, float wages) :Worker(cpf, nome, wages) {
}

float manager::bonus()const {
	return getWages() * 0.5;
}