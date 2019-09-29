#pragma once

#include "entidades.hpp"

using namespace std;

class TUEntidade
{
    private:
        virtual void compararValores() = 0;


    public:
        void run();

    virtual ~TUEntidade()
    {

    }
};




class TUUsuario : public TUEntidade
{
    private:

        void compararValores();

        Usuario usuario;

    public:
        const string NOME = "Ronald";
        const string TELEFONE = "55-61-999887766";
        const string EMAIL = "ronald@gmail.com";
        const string SENHA = "a4Y#%";
        const string C_P_F = "855.961.260-20";
        TUUsuario();

        ~TUUsuario()
        {

        }
};




class TUReserva : public TUEntidade
{
    private:
        const string CODIGO_DE_RESERVA = "86492";
        const string ASSENTO = "D";
        const string BAGAGEM = "3";

        void compararValores();

        Reserva reserva;

    public:
        TUReserva();

        ~TUReserva()
        {

        }
};




class TUCarona : public TUEntidade
{
    private:
        const string CODIGO_DE_CARONA = "1586";
        const string CIDADE_DE_ORIGEM = "Brasilia";
        const string ESTADO_DE_ORIGEM = "DF";
        const string CIDADE_DE_DESTINO = "Goiania";
        const string ESTADO_DE_DESTINO = "GO";
        const string DATA = "29/02/2020";
        const string DURACAO = "86492";
        const string VAGAS = "0";
        const string PRECO = "135";

        void compararValores();

    protected:
        Carona *carona;

    public:
        TUCarona();

        ~TUCarona()
        {

        }
};




class TUConta : public TUEntidade
{
    private:
        const string CODIGO_DE_BANCO = "129";
        const string NUMERO_DE_AGENCIA = "1234-4";
        const string NUMERO_DE_CONTA = "456789-7";

        void compararValores();

        Conta conta;

    public:
        TUConta();

        ~TUConta()
        {

        }
};
