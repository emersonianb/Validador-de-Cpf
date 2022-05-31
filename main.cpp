#include <iostream>
#include <string>
#include "pessoa.h"

using std::cin; using std::cout;

int main() {
  string nome;
  string cpf;
  cout << "Digite seu nome: ";
  cin >> nome;
  cout << "Digite seu CPF: ";
  cin >> cpf;
  Pessoa pessoa1(nome, cpf);
  if (pessoa1.validaCpf() != 1){
    cout << "CPF inválido!\n";
    }
  else{
    cout << "CPF Válido!";
  }
  return 0;
  }