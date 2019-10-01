///@author <Matheus Costa Oliveira e Ronald Cesar Oliveira>
#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

///A Classe **Dominio** � uma classe base para os dom�nios, que s�o elementos b�sicos para um sistema de caronas.
///
///Os dom�nios solicitados herdam a classe base de maneira p�blica. Portanto os m�todos p�blicos, protegidos e privados ser�o herdados nas mesmas caracter�sticas.
///@attention Todas as demais classes do arquivo *dominios* herdam da classe Dominio.
class Dominio
{
    private:
        string valor;
        virtual void validar(string) = 0;

    public:
        ///O m�todo setValor tem a fun��o de atribuir um valor para o atributo do tipo string, denotado de maneira privada como *valor*.
        ///Para cada dom�nio herdeiro, um m�todo *validar* � invocado para que se verifique se o par�metro passado segue o formato especificado para cada Classe herdeira.
        ///Se a string se adequar �s exig�ncias da classe, este valor � salvo como atributo da classe.
        void setValor(string);

        ///O m�todo serve para buscar o valor salvo do atributo string de cada classe em quest�o.
        ///Retorna o *valor* para o usu�rio da classe que a invocou.
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


///� a posi��o do banco utilizado pelo passageiro no ve�culo utilizado para execu��o da carona.
///
///A posi��o do assento pode ser *dianteira* ou *traseira*.
///Desse modo, o *valor* passado para o dom�nio pela fun��o @see setValor() tem de ser do formato "D" ou "T".
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
