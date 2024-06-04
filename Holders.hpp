#pragma once

#include <string>
#include "Person.hpp"
#include "Cpf.hpp"

class Holders:Person {
public:
	Holders(Cpf cpf, std::string nome);
};