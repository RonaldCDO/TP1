#pragma once

#include "entidades.hpp"

using namespace std;

class TUEntidade
{
    private:
        virtual void comparaValores() = 0;
        virtual void setValores() = 0;

    public:
        bool entradaValida = true;
        void run();

    virtual ~TUEntidade()
    {

    }
};



class TUUsuario : public TUEntidade
{
    private:

        void setValores();
        void comparaValores();

        Usuario usuario;

        Nome nome;
        Telefone telefone;
        Email email;
        Senha senha;
        CPF cpf;

        const string NOME = "Ronald";
        const string TELEFONE = "55-61-999887766";
        const string EMAIL = "ronald@gmail.com";
        const string SENHA = "a4Y#%";
        const string _CPF = "855.961.260-20";

    public:

        TUUsuario();

        ~TUUsuario()
        {

        }
};




class TUReserva : public TUEntidade
{
    private:

        void setValores();
        void comparaValores();

        Reserva reserva;

        CodigoDeReserva codigo;
        Assento assento;
        Bagagem bagagem;

        const string CODIGO_DE_RESERVA = "86492";
        const string ASSENTO = "D";
        const string BAGAGEM = "3";

    public:

        TUReserva(); 

        ~TUReserva()
        {

        }
};




class TUCarona : public TUEntidade
{
    private:

        void setValores();
        void comparaValores();

        Carona carona;

        CodigoDeCarona codigo;
        Cidade cidadeDeOrigem;
        Estado estadoDeOrigem;
        Cidade cidadeDeDestino;
        Estado estadoDeDestino;
        Data data;
        Duracao duracao;
        Vagas vagas;
        Preco preco;

        const string CODIGO_DE_CARONA = "1586";
        const string CIDADE_DE_ORIGEM = "Brasilia";
        const string ESTADO_DE_ORIGEM = "DF";
        const string CIDADE_DE_DESTINO = "Goiania";
        const string ESTADO_DE_DESTINO = "GO";
        const string DATA = "29/02/2020";
        const string DURACAO = "40";
        const string VAGAS = "0";
        const string PRECO = "135";

    public:

        TUCarona();

        ~TUCarona()
        {

        }
};




class TUConta : public TUEntidade
{
    private:

        void setValores();
        void comparaValores();

        Conta conta;

        CodigoDeBanco codigoDeBanco;
        NumeroDeAgencia numeroDeAgencia;
        NumeroDeConta numeroDeConta;

        const string CODIGO_DE_BANCO = "129";
        const string NUMERO_DE_AGENCIA = "1234-4";
        const string NUMERO_DE_CONTA = "456789-7";

    public:
        TUConta();

        ~TUConta()
        {

        }
};


class TestesEntidades
{
    public:
        static void RunAll();
};
