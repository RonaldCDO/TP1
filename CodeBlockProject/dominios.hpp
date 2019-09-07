#pragma once

#include <string>
#include <iostream>

using namespace std;

//Declara��o de Classes

class Dominio {
    private:
        string valor;

    public:
        void setValor(string valor);
        string getValor(){
            return valor;
        }
};

class Assento : public Dominio{};

class Bagagem : public Dominio{};

class CodigoDeBanco : public Dominio{};

class CodigoDeCarona : public Dominio{};

class CodigoDeReserva : public Dominio{};

class Cidade : public Dominio{};

class CPF : public Dominio{};

class Data : public Dominio{};

class Duracao : public Dominio{};

class Estado : public Dominio{};

class Email : public Dominio{};

class Nome : public Dominio{};

class NumeroDeAgencia: public Dominio{};

class NumeroDeConta : public Dominio{};

class Preco : public Dominio{};

class Telefone : public Dominio{};

class Senha : public Dominio{};

class Vagas : public Dominio{};