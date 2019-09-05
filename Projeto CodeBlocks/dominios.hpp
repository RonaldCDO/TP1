#pragma once
#include <string>
using namespace std;

//Declaração de Classes

class Assento{

private:
    string assento;

    //Método responsável pela validação
    void validar(string);

public:

    //Método de acesso ao atributo
    void setAssento (string);

    //Definição do método inline getClasse
inline string getAssento (){
    return assento;
}

};
