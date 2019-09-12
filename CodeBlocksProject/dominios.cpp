#include "dominios.hpp"
#include <vector>
#include <algorithm>
#include <sstream>

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

bool Dominio::StringNumerica(string valor){
    int i;
    for (i = 0; i < valor.size(); i++){
        if (!((valor[i] >= '0') && (valor[i] <= '9'))){
            return false;          
        }
    }
    return true;
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

    if (!(Data::StringNumerica(valor))){                        //Verifica se os caracteres restantes são números;
        throw invalid_argument("Numero de CPF invalido.");
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
        Verificador[1] = 0;    Data D;
    string d;
    cin >> d;
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
    int POS_BARRA[2];

    POS_BARRA[0] = 2;
    POS_BARRA[1] = 5;

    if (valor.size() != TAMANHO){
        throw invalid_argument("Formato de data inadequado.");
    }

    if ((valor[POS_BARRA[0]] != '/') || (valor[POS_BARRA[1]] != '/')){
        throw invalid_argument("Formato de data inadequado.");
    }

    valor.erase(valor.begin() + POS_BARRA[1]);          //Remove as barras da string data
    valor.erase(valor.begin() + POS_BARRA[0]);

    if (!(Data::StringNumerica(valor))){                //Verifica se os caracteres restantes são numeros
        throw invalid_argument("Formato de data inadequado.");
    }

    const int POS_DIA = 0, POS_MES = 2, POS_ANO = 4;
    const int TAMANHO_DIA = 2, TAMANHO_MES = 2, TAMANHO_ANO = 4;

    int dia = stoi(valor.substr(POS_DIA,TAMANHO_DIA));  //Obtencao dos valores para dia, mes e ano
    int mes = stoi(valor.substr(POS_MES,TAMANHO_MES));
    int ano = stoi(valor.substr(POS_ANO,TAMANHO_ANO));

    const int LIMITE_SUP_ANO = 2099;
    const int LIMITE_INF_ANO = 2000;
    const int LIMITE_INF = 1;
    const int LIMITE_SUP_MES = 12;
    const int FEVEREIRO = 2;
    bool bissexto = (ano % 4 == 0);
    
    if ((ano < LIMITE_INF_ANO) || (ano > LIMITE_SUP_ANO)){
        throw invalid_argument("Ano invalido: deve ser entre " + to_string(LIMITE_INF_ANO) + " e " + to_string(LIMITE_SUP_ANO));
    }

    if ((mes < LIMITE_INF) || (mes > LIMITE_SUP_MES)){
        throw invalid_argument("Mes invalido: deve ser entre " + to_string(LIMITE_INF) + " e " + to_string(LIMITE_SUP_MES));
    }
    
    vector<int> meses31 = {1,3,5,7,8,10,12};
    vector<int> meses30 = {4,6,9,11};

    string errorMessage;
    
    if (count(meses31.begin(),meses31.end(),mes)){
        if ((dia < LIMITE_INF) || (dia > 31)){
            errorMessage = "O mes " + to_string(mes) + " tem dias de 1 a 31";
            throw invalid_argument(errorMessage);
        }
    }

    else {
        if (count(meses30.begin(),meses30.end(),mes)){
            if ((dia < LIMITE_INF) || (dia > 30)){
                throw invalid_argument("O mes " + to_string(mes) + " tem dias de 1 a 30");
            }
        }

        else {
            if (mes == FEVEREIRO){
                if (bissexto){
                    if ((dia < LIMITE_INF) || (dia > 29)){
                        throw invalid_argument("O ano " + to_string(ano) + " é bissexto. O mes 2 comtempla dias de 1 a 29.");
                    }
                }
                else {
                    if ((dia < LIMITE_INF) || (dia > 28)){
                        throw invalid_argument("O ano " + to_string(ano) + " não é bissexto. Portanto, o mes 2 so comtempla dias de 1 a 28.");
                    }
                }
            }
        }
    }
}

void Duracao::validar(string valor){
    /*int duracao = stoi(valor);

    if ((duracao < 1) || (duracao > ))*/
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

