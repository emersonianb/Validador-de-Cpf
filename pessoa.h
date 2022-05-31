#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa
{
private:
string nome;
string cpf;
bool cpfValido = false;
bool iguais = false;

public:
Pessoa(string, string);
void setNome(string &);
void setCpf(string &);
inline string getNome(){return nome;}
inline string getCpf() {return cpf;}
//inline int getCpf(){return cpf;}
bool numerosIguais();
bool validaDigito1();
bool validaDigito2();
bool validaCpf();
};

#endif