#include <iostream>
#include <string>
#include "dominios.hpp"

using namespace std;

int main(){
    /*Assento A;
    Bagagem B;
    CodigoDeBanco CB;
    CodigoDeCarona CC;
    CodigoDeReserva CR;
    Cidade CITY;*/
    //CPF CF;
    Data D;
    string a, b, cb, cc, cr, city, cf, d;
    cout << "Entre os valores para os dominios na ordem." << endl;
    //cin >> a >> b >> cb >> cc >> cr >> city >> cf >> d;
    cin >> d;
    try{
        /*A.setValor(a);
        cout << "Assento selecionado: " << A.getValor() << endl;
        B.setValor(b);
        cout << "Quantidade de malas escolhida: " << B.getValor() << endl;
        CB.setValor(cb);
        cout << "Codigo do Banco: " << CB.getValor() << endl;
        CC.setValor(cc);
        cout << "Codigo de Carona: " << CC.getValor() << endl;
        CR.setValor(cr);
        cout << "Codigo de reserva: " << CR.getValor() << endl;
        CITY.setValor(city);
        cout << "Nome da cidade: " << CITY.getValor() << endl;
        CF.setValor(cf);
        cout << "Numero de CPF: " << CF.getValor() << endl;*/
        D.setValor(d);
        cout << "Data salva: " << D.getValor() << endl; 
    }
    catch(invalid_argument exp){
        cout << exp.what() << endl;
    }
    return 0;
}
