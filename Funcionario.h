#if !defined(_FUNCIONARIO_H_)
#define _FUNCIONARIO_H_

#include <iostream>

using namespace std;

class Funcionario
{
    string nome;
    int cod;
    int depCod;
    
public:
    Funcionario(const string &nome, const int &cod, const int &depcod);
    const string &getNome() const;
    const int &getCod() const;
    const int &getDepCod() const;
};


#endif // _Funcionario_H_
