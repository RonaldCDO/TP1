///@author <Matheus Costa Oliveira e Ronald Cesar Oliveira>
#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

///Classe Dominio
///
///Trata-se de uma abstracao de Heranca dos atributos e metodos comuns das classes tipo Dominio.
class Dominio
{
    private:
        string valor;
        virtual void validar(string) = 0;

    public:
        ///Metodo setValor(string);
        ///
        /// O metodo serve para atribuir valores para as os objetos das classes dominio.

        void setValor(string);
        ///Metodo getValor();
        ///
        ///O metodo get serve para buscar o valor existente da variavel string de cada classe dominio.
        string getValor()
        {
            return valor;
        }
        static bool CaracterLetra(char);
        static bool StringNumerica(string);
        static bool AlgoritmoDeLuhn(string);
        virtual ~Dominio()
        {

        }
};



class Assento : public Dominio
{
    private:
        void validar(string);
};



class Bagagem : public Dominio
{
    private:
        const static int TAMANHO = 1;
        void validar(string);
};



class CodigoDeBanco : public Dominio
{
    private:
        const static int TAMANHO = 3;
        void validar(string);
};



class CodigoDeCarona : public Dominio
{
    private:
        const static int TAMANHO = 4;
        void validar(string);
};



class CodigoDeReserva : public Dominio
{
    private:
        const static int TAMANHO = 5;
        void validar(string);
};



class Cidade : public Dominio
{
    private:
        const static int TAMANHO = 10;
        void validar(string);
};



class CPF : public Dominio
{
    private:
        const static int TAMANHO = 14;
        void validar(string);
};



class Data : public Dominio
{
    private:
        const static int TAMANHO = 10;
        void validar(string);
};



class Duracao : public Dominio
{
    private:
        void validar(string);
};



class Estado : public Dominio
{
    private:
        const static int TAMANHO = 2;
        void validar(string);
};



class Email : public Dominio
{
    private:
        void validar(string);
};



class Nome : public Dominio
{
    private:
        void validar(string);
};



class NumeroDeAgencia: public Dominio
{
    private:
        const static int TAMANHO = 6;
        void validar(string);
};



class NumeroDeConta : public Dominio
{
    private:
        const static int TAMANHO = 8;
        void validar(string);
};



class Preco : public Dominio
{
    private:
        void validar(string);
};



class Telefone : public Dominio
{
    private:
        const static int TAMANHO = 15;
        void validar(string);
};



class Senha : public Dominio
{
    private:
        const static int TAMANHO = 5;
        void validar(string);
};



class Vagas : public Dominio
{
    private:
        const static int TAMANHO = 1;
        void validar(string);
};
