#include "Departamento.h"

Departamento::Departamento(const Departamento &d) : nome(d.nome), cod(d.cod),funcionarios(d.funcionarios){}

Departamento::Departamento(const string &nome, const int &cod) : nome(nome), cod(cod)
{
}

const string &Departamento::getNome() const
{
    return this->nome;
}
const int &Departamento::getCod() const
{
    return this->cod;
}
const Funcionario &Departamento::insertNewFuncionario(const string &nome, const int &cod)
{
    // Funcionario f = Funcionario(nome, cod,this->cod);
    // this->funcionarios.insert(pair<int, Funcionario>(cod,f));
    // return f;
}

 const map<int, Funcionario> &Departamento::getFuncionarios()const{
    return this->funcionarios;
 }