#if !defined(_DEPARTAMENTO_H_)
#define _DEPARTAMENTO_H_

#include "Funcionario.h"
#include <iostream>
#include <map>

using namespace std;

class Departamento
{
    string nome;
    int cod;
    map<int, Funcionario> funcionarios;

public:
    // Departamento() {}
    Departamento(const Departamento &d);
    Departamento(const string &nome, const int &cod);
    const string &getNome() const;
    const int &getCod() const;
    const Funcionario &insertNewFuncionario(const string &nome, const int &cod);
    const map<int, Funcionario> &getFuncionarios() const;
};

#endif // _DEPARTAMENTO_H_
