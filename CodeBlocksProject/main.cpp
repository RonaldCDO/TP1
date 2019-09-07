#include <iostream>
#include <string>
#include "dominios.hpp"

using namespace std;

int main(){
    Assento A;
    Bagagem B;
    CodigoDeBanco CB;
    CodigoDeCarona CC;
    CodigoDeReserva CR;
    Cidade CITY;
    string a, b, cb, cc, cr, city;
    cout << "Entre os valores para os domínios na ordem." << endl;
    cin >> a >> b >> cb >> cc >> cr >> city;
    cout << Dominio::CaracterLetra(city[2]) << city[3] << city.size() << endl;
    try{
        A.setValor(a);
        cout << "O Assento selecionado foi: " << A.getValor() << endl;
        B.setValor(b);
        cout << "A quantidade de malas escolhida foi: " << B.getValor() << endl;
        CB.setValor(cb);
        cout << "O código do banco é: " << CB.getValor() << endl;
        CC.setValor(cc);
        cout << "O código de carona é: " << CC.getValor() << endl;
        CR.setValor(cr);
        cout << "O código de reserva é: " << CR.getValor() << endl;
        CITY.setValor(city);
        cout << "O nome da cidade é: " << CITY.getValor() << endl;
    }
    catch(invalid_argument exp){
        cout << exp.what() << endl;
    }
    return 0;
}
