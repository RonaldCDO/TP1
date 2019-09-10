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
    int i, POS_HIFEN;
    int POS_PONTO[2];

    POS_PONTO[0] = 3;           //Posicionamento dos pontos e dos hífens para um CPF correto.
    POS_PONTO[1] = 7;
    POS_HIFEN = 11;

    if (valor.size() != TAMANHO){
        throw invalid_argument("Numero de CPF invalido.");
    }

    if ((valor[POS_PONTO[0]] != '.') || (valor[POS_PONTO[1]] != '.') || (valor[POS_HIFEN] != '-')){
        throw invalid_argument("Numero de CPF invalido.");
    }

    for (i = 3; i > 0; i--){
        valor.erase(valor.begin() + ((4*i) - 1));             //Remove os '.' e '-' da string;
    }

    int TamanhoVetorDig = valor.size();                       //Agora o tamanho do CPF é 11;
    int DigitosVerificadores[TamanhoVetorDig], Verificador[2];
    int DigitoInt; 
    int Soma = 0;
    bool TesteDigitos[2];

    for (i = 0; i < valor.size(); i++){
        if (!((valor[i] >= '0') && (valor[i] <= '9'))){
            throw invalid_argument("Numero de CPF invalido.");          //Verifica se os caracteres restantes são números;
        }
    }

    for (i = 0; i < (TamanhoVetorDig - 2); i++){                        //Executa o algoritmo de vericação para o primeiro dígito.
        DigitoInt = (int)(valor[i] - '0');
        DigitosVerificadores[i] = DigitoInt * (10 - i);
        Soma += DigitosVerificadores[i];
    }

    if ((Soma % 11) < 2){
        DigitosVerificadores[TamanhoVetorDig-2] = 0;
        Verificador[0] = 0;
    }
    else{
        DigitosVerificadores[TamanhoVetorDig-2] = 11 - (Soma % 11);
        Verificador[0] = 11 - (Soma % 11);
    }

    Soma = 0;

    for (i = 0; i < (TamanhoVetorDig - 1); i++){                        //Executa a verificação para o segundo dígito
        DigitoInt = (int)(valor[i] - '0');
        DigitosVerificadores[i] = DigitoInt * (11 - i);
        Soma += DigitosVerificadores[i];
    }

    if ((Soma % 11) < 2){
        Verificador[1] = 0;
    }
    else{
        Verificador[1] = 11 - (Soma % 11);
    }

    TesteDigitos[0] = ((int)(valor[valor.size()-2] - '0') != Verificador[0]);       //Compara os digitos verificadores digitados pelo usuário 
    TesteDigitos[1] = ((int)(valor[valor.size()-1] - '0') != Verificador[1]);       // com os obtidos pelo algoritmo.

    if (TesteDigitos[0] || TesteDigitos[1]){
        throw invalid_argument("Combinacao numerica invalida para CPF.");
    }
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
