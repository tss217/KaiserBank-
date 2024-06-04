#pragma once
#include <string>
#include "Cpf.hpp"
#include "Person.hpp"

class Worker final:public Person
{
public:
	Worker(Cpf cpf, std::string nome, float wages);
	std::string getWokerName()const;
	virtual float bonus()const = 0;
	float getWages()const;
private:
	float wages;
	
};

