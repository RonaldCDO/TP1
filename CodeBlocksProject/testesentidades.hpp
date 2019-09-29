#pragma once

#include "entidades.hpp"

class TUEntidade
{
    private:
        virtual void setUp() = 0;
        void testarCenarioSucesso();
        void tearDown();

    public:
        void run();

    virtual ~TUEntidade()
    {

    }
};




class TUUsuario ::public TUEntidade
{
    private:
        void setUp();

    protected:
        Usuario *usuario;

    public:
        TUUsuario()
        {
         usuario.nome = "Ronald";
         usuario.telefone = "55-61-999887766";
         usuario.email = "ronaldcesar.eng@gmail.com"
         usuario.senha = "a4Y#%"
         usuario.cpf = "855.961.260-20"
        }
        ~TUUsuario()
        {

        }
};




class TUReserva ::public TUEntidade
{
    private:
        void setUp();

    protected:
        Reserva *reserva;

    public:
        TUReserva()
        {
         reserva.codigo = "86492";
         reserva.assento = "D";
         reserva.bagagem = "3";
        }
        ~TUUsuario()
        {

        }
};




class TUReserva ::public TUEntidade
{
    private:
        void setUp();

    protected:
        Reserva *reserva;

    public:
        TUReserva()
        {
         reserva.codigo = "86492";
         reserva.assento = "D";
         reserva.bagagem = "3";
        }
        ~TUUsuario()
        {

        }
};




class TUCarona ::public TUEntidade
{
    private:
        void setUp();

    protected:
        Carona *carona;

    public:
        TUCarona()
        {
         carona.codigo = "1586";
         carona.cidadeDeOrigem = "Brasilia";
         carona.estadoDeOrigem = "DF";
         carona.cidadeDeDestino = "Goiania";
         carona.estadoDeDestino = "GO";
         carona.data = "29/02/2020";
         carona.duracao = "20";
         carona.vagas = "0";
         carona.preco = "135";
        }
        ~TUUsuario()
        {

        }
};




class TUConta ::public TUEntidade
{
    private:
        void setUp();

    protected:
        Conta *conta;

    public:
        TUConta()
        {
         conta.banco = "129";
         conta.agencia = "1234-4";
         conta.numero = "456789-7";
        }
        ~TUUsuario()
        {

        }
};
