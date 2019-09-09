#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

//Declaracao de Classes.

class Dominio {
    private:
        string valor;
        virtual void validar(string) = 0;
    public:
        void setValor(string);
        string getValor(){
            return valor;
        }
        static bool CaracterLetra(char);
};

//Ultilizacao de heranca para o atributo valor de Dominios e os metodos, set, get e validar.
class Assento : public Dominio{
    private:
        void validar(string);
};

class Bagagem : public Dominio{
    private:
        //Declarando o Tamanho do "vetor" string.
        const static int TAMANHO = 1;
        void validar(string);
};

class CodigoDeBanco : public Dominio{
    private:
        const static int TAMANHO = 3;
        void validar(string);
};

class CodigoDeCarona : public Dominio{
    private:
        const static int TAMANHO = 4;
        void validar(string);
};

class CodigoDeReserva : public Dominio{
    private:
        const static int TAMANHO = 5;
        void validar(string);
};

class Cidade : public Dominio{
    private:
        const static int TAMANHO = 10;
        void validar(string);
};

class CPF : public Dominio{
    private:
        const static int TAMANHO = 11;
        void validar(string);
};

class Data : public Dominio{
    public:
        void validar(string);
};

class Duracao : public Dominio{
    public:
        void validar(string);
};

class Estado : public Dominio{
    public:
        void validar(string);
};

class Email : public Dominio{
    public:
        void validar(string);
};

class Nome : public Dominio{
    public:
        void validar(string);
};

class NumeroDeAgencia: public Dominio{
    public:
        void validar(string);
};

class NumeroDeConta : public Dominio{
    public:
        void validar(string);
};

class Preco : public Dominio{
    public:
        void validar(string);
};

class Telefone : public Dominio{
    public:
        void validar(string);
};

class Senha : public Dominio{
    public:
        void validar(string);
};

class Vagas : public Dominio{
    public:
        void validar(string);
};
