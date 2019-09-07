#include "dominios.hpp"

using namespace std;

void Dominio::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

void Assento::validar(string valor){
    if((valor != "D") && (valor != "T")){
        throw invalid_argument("Opção de assento inadequada.");
    }
}

void Bagagem::validar(string valor){
    int qtdbagagens = stoi(valor);
    if ((qtdbagagens < 0) || (qtdbagagens > 4) || (valor.size() > TAMANHO)){
        throw invalid_argument("Quantidade inadequada de bagagens.");
    }
}

void CodigoDeBanco::validar(string valor){
    int codigodebanco = stoi(valor);
    if ((codigodebanco < 0) || (codigodebanco > 999) || (valor.size() > TAMANHO)){
        throw invalid_argument("Código de banco inválido.");
    }
}

void CodigoDeCarona::validar(string valor){
    int codigodecarona = stoi(valor);
    if ((codigodecarona < 0) || (codigodecarona > 9999) || (valor.size() > TAMANHO)){
        throw invalid_argument("Código de carona inválido.");
    }
}

void CodigoDeReserva::validar(string valor){
    int codigodereserva = stoi(valor);
    if ((codigodereserva < 0) || (codigodereserva > 99999) || (valor.size() > TAMANHO)){
        throw invalid_argument("Código de reserva inválido.");
    }
}

bool Dominio::CaracterLetra(char ch){
    if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A')){
        return true;
    }
    else
        return false;
}

void Cidade::validar(string valor){
    int i;
    if (!Cidade::CaracterLetra(valor[0]) || (valor[0] != ' ')){
        throw invalid_argument("Nome de cidade inválido.");
    }
    for (i = 1 ; i < valor.size(); i++){
        if (valor[i] == '.'){
            if (!Cidade::CaracterLetra(valor[i-1])){
                throw invalid_argument("Nome de cidade inválido.");
            }
        }
        else if (valor[i] == ' '){
            if (valor[i-1] == ' '){
                throw invalid_argument("Nome de cidade inválido.");
            }
        }
        else if (!Cidade::CaracterLetra(valor[i])){
            throw invalid_argument("Nome de cidade inválido.");
        }
    }
}