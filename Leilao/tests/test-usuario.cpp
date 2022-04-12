#include "catch.hpp"
#include "Usuario.hpp"

TEST_CASE("Usuário deve saber informar seu primeiro nome"){
	Usuario vinicius("Vinicius Dias");
	std::string primeiroNome = vinicius.recuperaPrimeiroNome();
	
	REQUIRE("Vinicius" == primeiroNome);
}

TEST_CASE("Usuário não tem nome com espaço"){
	Usuario andre("André");
	std::string primeiroNome = andre.recuperaPrimeiroNome();
	
	REQUIRE("André" == primeiroNome);
}