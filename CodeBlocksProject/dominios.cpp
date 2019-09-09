#include "dominios.hpp"

using namespace std;

//Definicao dos metodos da Classe Abstrata utilizada na Heranca.
void Dominio::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

bool Dominio::CaracterLetra(char ch){
    if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A')){
        return true;
    }
    else
        return false;
}

//Definicao dos metodos validar especificos de cada Classe
void Assento::validar(string valor){
    if((valor != "D") && (valor != "T")){
        throw invalid_argument("Opcao de assento inadequada.");
    }
}

void Bagagem::validar(string valor){
    int qtdDeBagagens = stoi(valor);
    if ((qtdDeBagagens < 0) || (qtdDeBagagens > 4) || (valor.size() != TAMANHO)){
        throw invalid_argument("Quantidade inadequada de bagagens.");
    }
}

void CodigoDeBanco::validar(string valor){
    int codigoDeBanco = stoi(valor);
    const int LIMITE_INF = 0, LIMITE_SUP = 999;
    if ((codigoDeBanco < LIMITE_INF) || (codigoDeBanco > LIMITE_SUP) || (valor.size() != TAMANHO)){
        throw invalid_argument("Codigo de banco invalido.");
    }
}

void CodigoDeCarona::validar(string valor){
    int codigoDeCarona = stoi(valor);
    const int LIMITE_SUP = 9999, LIMITE_INF = 0;
    if ((codigoDeCarona < LIMITE_INF) || (codigoDeCarona > LIMITE_SUP) || (valor.size() != TAMANHO)){
        throw invalid_argument("Codigo de carona invalido.");
    }
}

void CodigoDeReserva::validar(string valor){
    int codigoDeReserva = stoi(valor);
    const int LIMITE_SUP = 99999, LIMITE_INF = 0;
    if ((codigoDeReserva < LIMITE_INF) || (codigoDeReserva > LIMITE_SUP) || (valor.size() != TAMANHO)){
        throw invalid_argument("Codigo de reserva invalido.");
    }
}

void Cidade::validar(string valor){
    int i;
    if (!Cidade::CaracterLetra(valor[0]) && (valor[0] != ' ')){
        throw invalid_argument("Nome de cidade invalido.");
    }
    for (i = 1 ; i < valor.size(); i++){
        if (valor[i] == '.'){
            if (!Cidade::CaracterLetra(valor[i-1])){
                throw invalid_argument("Nome de cidade invalido.");
            }
        }
        else if (valor[i] == ' '){
            if (valor[i-1] == ' '){
                throw invalid_argument("Nome de cidade invalido.");
            }
        }
        else if (!Cidade::CaracterLetra(valor[i])){
            throw invalid_argument("Nome de cidade invalido.");
        }
    }
}

void CPF::validar(string valor){
    int cpf = stoi(valor), digitoVerificador1,
    digitoVerificador2, temporario = 0, i, LIMITE_SUP = 99999999999,
    LIMITE_INF = 0;

    if ((cpf < LIMITE_INF) || (cpf > LIMITE_SUP) || (valor.size() != TAMANHO))
        throw invalid_argument("Numero de CPF invalido.");

    for(i =0; i< 9; i++)
        temporario += (valor[i] * (10-i));

    temporario %= 11;

    if(temporario < 2)
        digitoVerificador1 = 0;
    else
        digitoVerificador1 = (11 - temporario);

    temporario = 0;

    for(i = 0; i< 10; i++)
        temporario += (valor[i] * (11 - i));

    temporario %= 11;

    if(temporario < 2)
        digitoVerificador2 = 0;
    else
        digitoVerificador2 = 11 - temporario;

    if (digitoVerificador1 != valor[9] && digitoVerificador2 != valor[10])
        throw invalid_argument("Numero de CPF invalido.");


}

void Data::validar(string valor){
}

void Duracao::validar(string valor){
}

void Estado::validar(string valor){
}

void Email::validar(string valor){
}

void Nome::validar(string valor){
}

void NumeroDeAgencia::validar(string valor){
}

void NumeroDeConta::validar(string valor){
}

void Preco::validar(string valor){
}

void Telefone::validar(string valor){
}

void Senha::validar(string valor){
}

void Vagas::validar(string valor){
}

