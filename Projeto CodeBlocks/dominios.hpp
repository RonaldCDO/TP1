#pragma once
#include <string>
using namespace std;

//Declara��o de Classes

class Assento{

private:
    string assento;

    //M�todo respons�vel pela valida��o
    void validar(string);

public:

    //M�todo de acesso ao atributo
    void setAssento (string);

    //Defini��o do m�todo inline getClasse
inline string getAssento (){
    return assento;
}

};
