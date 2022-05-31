#include <iostream>
#include <string>
#include "pessoa.h"

using std::string; using std::cout;

Pessoa::Pessoa(string n, string c){
  setNome(n);
  setCpf(c);
}

void Pessoa::setNome(string &n){
  nome = n;
}

void Pessoa::setCpf(string &c){
  cpf = c;
}

bool Pessoa::numerosIguais(){
  if ((cpf[0] == cpf[1]) && (cpf[1] == cpf[2]) && (cpf[2] == cpf[3]) && (cpf[3] == cpf[4]) && (cpf[4] == cpf[5]) && (cpf[5] == cpf[6]) && (cpf[6] == cpf[7]) && (cpf[7] == cpf[8]) && (cpf[8] == cpf[9]) && (cpf[9] == cpf[10])){
    iguais = true;
  }
  return iguais;
}


bool Pessoa::validaDigito1(){
  int valor = 0;
  int b = 10;
  bool valida1 = false;
  for (char &i : cpf){
    int v = (i - '0');
    if (b != 1){
      valor += (v*b);
      b -= 1;
    }
  }
  auto f = ((valor == 10) ? 0 : ((valor*10)%11));
  if (f == (cpf[9] - '0')){
    valida1 = true;
  }
  return valida1;
}

bool Pessoa::validaDigito2(){
  int valor2 = 0;
  bool valida2 = true;
  int d = 11;
  for (char &j : cpf){
    int w = (j - '0');
    if (d != 1){
      valor2 += (w*d);
      d -= 1;
    }
  }
  auto g = ((valor2 == 10) ? 0 : ((valor2*10)%11));
  if (g == (cpf[10] - '0')){
    valida2 = true;
  }
  return valida2;
}

bool Pessoa::validaCpf(){
  if (numerosIguais() == false){
    if (validaDigito1() == true && validaDigito2() == true){
    cpfValido = true;
    }
  }
  return cpfValido;
}