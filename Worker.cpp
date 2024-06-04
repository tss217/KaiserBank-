#include "Worker.hpp"

Worker::Worker(Cpf cpf, std::string nome, float wages) :
	Person(cpf, nome),
	wages(wages) {

}

std::string Worker::getWokerName()const
{
	return nome;
}

float Worker::getWages()const {
	return  wages;
}