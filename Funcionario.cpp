#include "Funcionario.h"


Funcionario::Funcionario(const string &nome, const int &cod,const int &depCod):nome(nome),cod(cod),depCod(depCod)
{}

const string &Funcionario::getNome() const{
    return this->nome;
}
const int &Funcionario::getCod() const{
    return this->cod;
}

const int &Funcionario::getDepCod() const{
    return this->depCod;
}

