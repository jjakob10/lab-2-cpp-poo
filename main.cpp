#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include "Departamento.h"

using namespace std;

int main()
{
    map<int, Departamento> departamentos;

    ifstream in("departamentos.csv");
    string linha;
    getline(in, linha);
    while (getline(in, linha))
    {
        istringstream linhaStream(linha);
        string coluna;
        getline(linhaStream, coluna, ';');
        int cod = stoi(coluna);
        getline(linhaStream, coluna, ';');
        Departamento d(coluna, cod);
        departamentos.insert(pair<int, Departamento>(cod,d ));
    }
    in.close();
    ifstream in2("funcionarios.csv");
    getline(in2, linha);
    while (getline(in2, linha))
    {
        istringstream linhaStream(linha);
        string coluna;
        getline(linhaStream, coluna, ';');
        int cod = stoi(coluna);

        getline(linhaStream, coluna, ';');
        string nome = coluna;

        getline(linhaStream, coluna, ';');
        int depCod = stoi(coluna);
        const Departamento d = departamentos[depCod];
        // d.insertNewFuncionario(nome, cod);
    }
    in2.close();

    for (const pair<const int, Departamento> &par : departamentos)
    {
        cout << par.second.getCod() << ": " << par.second.getNome() << endl;
        // for (const pair<int, Funcionario> &parfunc : par.second.getFuncionarios())
        // {  
        //     cout << "\t" << parfunc.second.getCod() << ": "<<parfunc.second.getNome()<<endl;
        // }
    }

    return 0;
}