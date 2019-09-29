/* Autores: Matheus Costa de Oliveira, Ronald Cesar Dias de Oliveira
 * Matriculas: 170019039, 180047205
 * Universidade de Brasilia, 2o Semestre de 2019
 * Disciplina: Tecnicas de Programacao 1
 * Professor: Fernando Albuquerque
 * Linguagem utilizada: C++
 */

#pragma once

#include "dominios.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Usuario
{
    private:



    public:

        Nome nome;
        Telefone telefone;
        Email email;
        Senha senha;
        CPF cpf;

        void setNome(const Nome &nome)
        {
            this->nome = nome;
        }

        void setTelefone (const Telefone &telefone)
        {
            this->telefone = telefone;
        }


        void setEmail (const Email &email)
        {
            this->email = email;
        }


        void setSenha (const Senha &senha)
        {
            this->senha = senha;
        }


        void setCPF (const CPF &cpf)
        {
            this->cpf = cpf;
        }


        Nome getNome ()
        {
            return nome;
        }


        Telefone getTelefone ()
        {
            return telefone;
        }


        Email getEmail ()
        {
            return email;
        }


        Senha getSenha ()
        {
            return senha;
        }


        CPF getCPF ()
        {
            return cpf;
        }
};



class Reserva
{
    private:
        CodigoDeReserva codigo;
        Assento assento;
        Bagagem bagagem;

    public:
        void setCodigoDeReserva (const CodigoDeReserva &codigo)
        {
            this->codigo = codigo;
        }


        void setAssento (const Assento &assento)
        {
            this->assento = assento;
        }


        void setBagagem (const Bagagem &bagagem)
        {
            this->bagagem = bagagem;
        }


        CodigoDeReserva getCodigoDeReserva()
        {
            return codigo;
        }


        Assento getAssento()
        {
            return assento;
        }


        Bagagem getBagagem ()
        {
            return bagagem;
        }
};



class Carona
{
    private:

        CodigoDeCarona codigo;
        Cidade cidadeDeOrigem;
        Estado estadoDeOrigem;
        Cidade cidadeDeDestino;
        Estado estadoDeDestino;
        Data data;
        Duracao duracao;
        Vagas vagas;
        Preco preco;

    public:

        void setCodigoDeCarona (const CodigoDeCarona &codigo)
        {
            this->codigo = codigo;
        }


        void setCidade (const Cidade &cidadeDeOrigem)
        {
            this->cidadeDeOrigem = cidadeDeOrigem;
        }


        void setEstadoDeOrigem (const Estado &estadoDeOrigem)
        {
            this->estadoDeOrigem = estadoDeOrigem;
        }


        void setCidadeDeDestino (const Cidade &cidadeDeDestino)
        {
            this->cidadeDeDestino = cidadeDeDestino;
        }


        void setEstadoDeDestino (const Estado &estadoDeDestino)
        {
            this->estadoDeDestino = estadoDeDestino;
        }


        void setData (const Data &data)
        {
            this->data = data;
        }


        void setDuracao (const Duracao &duracao)
        {
            this->duracao = duracao;
        }


        void setVagas (const Vagas &vagas)
        {
            this->vagas = vagas;
        }


        void setPreco (const Preco &preco)
        {
            this->preco = preco;
        }


        CodigoDeCarona getCodigoDeCarona()
        {
            return codigo;
        }


        Cidade getCidade ()
        {
            return cidadeDeOrigem;
        }


        Estado getEstadoDeOrigem()
        {
            return estadoDeOrigem;
        }


        Cidade getCidadeDeDestino ()
        {
            return cidadeDeDestino;
        }


        Estado getEstadoDeDestino()
        {
            return estadoDeDestino;
        }


        Data getData ()
        {
            return data;
        }


        Duracao getDuracao()
        {
            return duracao;
        }


        Vagas getVagas ()
        {
            return vagas;
        }


        Preco getPreco()
        {
            return preco;
        }
};




class Conta
{
    private:
        CodigoDeBanco banco;
        NumeroDeAgencia agencia;
        NumeroDeConta conta;

    public:
        void setCodigoDeBanco (const CodigoDeBanco &banco)
        {
            this->banco = banco;
        }


        void setNumeroDeAgencia (const NumeroDeAgencia &agencia)
        {
            this->agencia = agencia;
        }


         void setNumeroDeConta (const NumeroDeConta &conta)
        {
            this->conta = conta;
        }


        CodigoDeBanco getCodigoDeBanco ()
        {
            return banco;
        }


        NumeroDeAgencia getNumeroDeAgencia()
        {
            return agencia;
        }


        NumeroDeConta getNumeroDeConta()
        {
            return conta;
        }
};
