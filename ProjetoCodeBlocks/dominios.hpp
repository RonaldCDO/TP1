///@author <Matheus Costa Oliveira e Ronald Cesar Oliveira>
#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

///A Classe **Dominio** é uma classe base para os domínios, que são elementos básicos para um sistema de caronas.
///
///Os domínios solicitados herdam a classe base de maneira pública. Portanto os métodos públicos, protegidos e privados serão herdados nas mesmas características.
///@attention Todas as demais classes do arquivo *dominios* herdam da classe Dominio.
class Dominio
{
    private:
        string valor;
        virtual void validar(string) = 0;

    public:
        ///O método setValor tem a função de atribuir um valor para o atributo do tipo string, denotado de maneira privada como *valor*.
        ///Para cada domínio herdeiro, um método *validar* é invocado para que se verifique se o parâmetro passado segue o formato especificado para cada Classe herdeira.
        ///Se a string se adequar às exigências da classe, este valor é salvo como atributo da classe.
        void setValor(string);

        ///O método serve para buscar o valor salvo do atributo string de cada classe em questão.
        ///Retorna o *valor* para o usuário da classe que a invocou.
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


///É a posição do banco utilizado pelo passageiro no veículo utilizado para execução da carona.
///
///A posição do assento pode ser *dianteira* ou *traseira*.
///Desse modo, o *valor* passado para o domínio pela função @see setValor() tem de ser do formato "D" ou "T".
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
