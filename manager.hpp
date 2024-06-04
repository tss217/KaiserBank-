#pragma once
#include "Worker.hpp"
class manager final :public Worker
{
public:
	manager(Cpf cpf, std::string nome, float wages);
	float bonus()const;
};

