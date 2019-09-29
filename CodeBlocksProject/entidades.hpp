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
    public:

        CodigoDeReserva codigo;
        Assento assento;
        Bagagem bagagem;

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
    public:

        CodigoDeCarona codigo;
        Cidade cidadeDeOrigem;
        Estado estadoDeOrigem;
        Cidade cidadeDeDestino;
        Estado estadoDeDestino;
        Data data;
        Duracao duracao;
        Vagas vagas;
        Preco preco;

        void setCodigoDeCarona (const CodigoDeCarona &codigo)
        {
            this->codigo = codigo;
        }


        void setCidadeDeOrigem (const Cidade &cidadeDeOrigem)
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


        Cidade getCidadeDeOrigem ()
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
    public:
        CodigoDeBanco codigoDeBanco;
        NumeroDeAgencia numeroDeAgencia;
        NumeroDeConta numeroDeConta;

        void setCodigoDeBanco (const CodigoDeBanco &codigoDeBanco)
        {
            this->codigoDeBanco = codigoDeBanco;
        }


        void setNumeroDeAgencia (const NumeroDeAgencia &numeroDeAgencia)
        {
            this->numeroDeAgencia = numeroDeAgencia;
        }


         void setNumeroDeConta (const NumeroDeConta &numeroDeConta)
        {
            this->numeroDeConta = numeroDeConta;
        }


        CodigoDeBanco getCodigoDeBanco()
        {
            return codigoDeBanco;
        }


        NumeroDeAgencia getNumeroDeAgencia()
        {
            return numeroDeAgencia;
        }


        NumeroDeConta getNumeroDeConta()
        {
            return numeroDeConta;
        }
};
