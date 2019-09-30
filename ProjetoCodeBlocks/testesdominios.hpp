/* Autores: Matheus Costa de Oliveira, Ronald Cesar Dias de Oliveira
 * Matriculas: 170019039, 180047205
 * Universidade de Brasilia, 2o Semestre de 2019
 * Disciplina: Tecnicas de Programacao 1
 * Professor: Fernando Albuquerque
 * Linguagem utilizada: C++
 */

#pragma once

#include "dominios.hpp"

using namespace std;


class TUDominio
{
    private:
        virtual void setUp() = 0;
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    protected:
        Dominio *dominio;

    public:
        string tipo;
        string VALOR_VALIDO;
        string VALOR_INVALIDO;
        void run();

        virtual ~TUDominio()
        {

        }
};



class TUAssento : public TUDominio
{
    private:
        void setUp();

    public:
        TUAssento()
        {
            VALOR_VALIDO = "D";
            VALOR_INVALIDO = "A";
        }
};



class TUBagagem : public TUDominio
{
    private:
        void setUp();

    public:
        TUBagagem()
        {
            VALOR_VALIDO = "3";
            VALOR_INVALIDO = "5";
        }
};



class TUCodigoDeBanco : public TUDominio
{
    private:
        void setUp();


    public:
        TUCodigoDeBanco()
        {
            VALOR_VALIDO = "129";
            VALOR_INVALIDO = "8a6";
        }
};



class TUCodigoDeCarona : public TUDominio
{
    private:
        void setUp();

    public:
        TUCodigoDeCarona()
        {
            VALOR_VALIDO = "1586";
            VALOR_INVALIDO = "78";
        }
};



class TUCodigoDeReserva : public TUDominio
{
    private:
        void setUp();

    public:
        TUCodigoDeReserva()
        {
            VALOR_VALIDO = "86492";
            VALOR_INVALIDO = "2578#";
        }
};



class TUCidade : public TUDominio
{
    private:
        void setUp();

    public:
        TUCidade()
        {
            VALOR_VALIDO = "Brasilia.";
            VALOR_INVALIDO = "BSB .DF";
        }
};



class TUCPF : public TUDominio
{
    private:
        void setUp();

    public:
        TUCPF()
        {
            VALOR_VALIDO = "052.576.591-31";
            VALOR_INVALIDO = "052.576.591-13";
        }
};



class TUData : public TUDominio
{
    private:
        void setUp();

    public:
        TUData()
        {
            VALOR_VALIDO = "29/02/2020";
            VALOR_INVALIDO = "29/02/2019";
        }
};



class TUDuracao : public TUDominio
{
    private:
        void setUp();

    public:
        TUDuracao()
        {
            VALOR_VALIDO = "20";
            VALOR_INVALIDO = "50";
        }
};



class TUEstado : public TUDominio
{
    private:
        void setUp();

    public:
        TUEstado()
        {
            VALOR_VALIDO = "DF";
            VALOR_INVALIDO = "AB";
        }
};



class TUEmail : public TUDominio
{
    private:
        void setUp();

    public:
        TUEmail()
        {
            VALOR_VALIDO = "matheus@hotmail.com";
            VALOR_INVALIDO = "matheus.@hotmail.com";
        }
};



class TUNome : public TUDominio
{
    private:
        void setUp();

    public:
        TUNome()
        {
            VALOR_VALIDO = "Matheus Costa.";
            VALOR_INVALIDO = "Matheus  Costa.";
        }
};



class TUNumeroDeAgencia : public TUDominio
{
    private:
        void setUp();

    public:
        TUNumeroDeAgencia()
        {
            VALOR_VALIDO = "1234-4";
            VALOR_INVALIDO = "1234-6";
        }
};



class TUNumeroDeConta : public TUDominio
{
    private:
        void setUp();

    public:
        TUNumeroDeConta()
        {
            VALOR_VALIDO = "456789-7";
            VALOR_INVALIDO = "456789-0";
        }
};



class TUPreco : public TUDominio
{
    private:
        void setUp();

    public:
        TUPreco()
        {
            VALOR_VALIDO = "135";
            VALOR_INVALIDO = "0";
        }
};



class TUTelefone : public TUDominio
{
    private:
        void setUp();

    public:
        TUTelefone()
        {
            VALOR_VALIDO = "55-61-999887766";
            VALOR_INVALIDO = "01-00-987654321";
        }
};



class TUSenha : public TUDominio
{
    private:
        void setUp();

    public:
        TUSenha()
        {
            VALOR_VALIDO = "a4Y#%";
            VALOR_INVALIDO = "67#$9";
        }
};
void tearDown();


class TUVagas : public TUDominio
{
    private:
        void setUp();

    public:
        TUVagas()
        {
            VALOR_VALIDO = "0";
            VALOR_INVALIDO = "10";
        }
};



class TestesDominios
{
    public:
        static void RunAll();
};
