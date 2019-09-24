/* Autores: Matheus ..., Ronald Oliveira
 * Matr�culas: ..., 180047205
 * Universidade de Brasilia, 2� Semestre de 2019
 * Disciplina: T�cnicas de Programa��o 1
 * Professor: Fernando Albuquerque
 * Linguagem utilizada: C++
 */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

 // Declara��o dos Dom�nios

class Dominio
{
    private:
        string valor;
        virtual void validar(string) = 0;
    public:
        void setValor(string);
        string getValor()
        {
            return valor;
        }
        static bool CaracterLetra(char);
        static bool StringNumerica(string);
        static bool AlgoritmoDeLuhn(string);
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
