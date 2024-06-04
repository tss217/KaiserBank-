
#include <iostream>
#include <string>
#include "Conta.hpp"
#include "savingsAccount.hpp"
#include "Holders.hpp"
#include "Cpf.hpp"
#include "Worker.hpp"
#include "currentAccount.hpp"

using namespace std;

void showBalance(const Conta& conta) {
	cout << "your balance is: " << conta.getBalance()<< endl;
}

void doWithDraw(Conta&conta) {
	conta.withDraw(200);
}

int main()
{
	savingsAccount accountOne("12345", Holders(Cpf("123456789-10"), "ts217"));
	currentAccount accountTwo("54321", Holders(Cpf("09876543-21"), "ththth"));

	accountOne.deposit(400);
	accountTwo.deposit(900);

	doWithDraw(accountOne);
	doWithDraw(accountTwo);

	accountTwo.tranferToAnotherAccount(accountOne, 250);

	showBalance(accountOne);
	showBalance(accountTwo);

	

	cout << "number of accounts: " << Conta::getNumberOfAccounts() << endl;

	Worker worker(Cpf("123454789-10"), "tstststst", 10000);

	cout << "nome do funcionario: " << worker.getWokerName() << endl;

	return 0;

}