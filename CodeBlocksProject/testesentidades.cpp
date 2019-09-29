#include "testesentidades.hpp"

using namespace std;

void TUEntidade::run()
{
    if (entradaValida)
    {
        setValores();

        try
        {
            comparaValores();
        }
        catch (invalid_argument exp)
        {
            cout << exp.what() << endl;
        }
    }
}

TUUsuario::TUUsuario()
{
    try
    {
        nome.setValor(NOME);
        telefone.setValor(TELEFONE);
        email.setValor(EMAIL);
        senha.setValor(SENHA);
        cpf.setValor(_CPF);
    }
    catch(invalid_argument exp)
    {
        cout << exp.what() << endl;
        entradaValida = false;
    }
}

void TUUsuario::setValores()
{
    usuario.setNome(nome);
    usuario.setTelefone(telefone);
    usuario.setEmail(email);
    usuario.setSenha(senha);
    usuario.setCPF(cpf);
}


void TUUsuario::comparaValores()
{
    if (usuario.nome.getValor() != NOME)
    {
        throw invalid_argument("Classe Usuario nao armazenou um nome valido");
    }

    if (usuario.telefone.getValor() != TELEFONE)
    {
        throw invalid_argument("Classe Usuario nao armazenou um telefone valido");
    }

    if (usuario.email.getValor() != EMAIL)
    {
        throw invalid_argument("Classe Usuario nao armazenou um email valido");
    } 
    
    if (usuario.senha.getValor() != SENHA)
    {
        throw invalid_argument("Classe Usuario nao armazenou uma senha valida");
    }

    if (usuario.cpf.getValor() != _CPF)
    {
        throw invalid_argument("Classe Usuario nao armazenou um cpf valido");
    }
}



TUReserva::TUReserva()
{
    try
    {
        codigo.setValor(CODIGO_DE_RESERVA);
        assento.setValor(ASSENTO);
        bagagem.setValor(BAGAGEM);
    }
    catch(invalid_argument exp)
    {
        cout << exp.what() << endl;
        entradaValida = false;
    }
}


void TUReserva::setValores()
{
    reserva.setCodigoDeReserva(codigo);
    reserva.setAssento(assento);
    reserva.setBagagem(bagagem);
}


void TUReserva::comparaValores()
{
    if (reserva.codigo.getValor() != CODIGO_DE_RESERVA)
    {
        throw invalid_argument("Classe Reserva nao armazenou um codigo valido.");
    }

    if (reserva.assento.getValor() != ASSENTO)
    {
        throw invalid_argument("Classe Reserva nao armazenou um assento valido.");
    }

    if (reserva.bagagem.getValor() != BAGAGEM)
    {
        throw invalid_argument("Classe Reserva nao armazenou uma bagagem valida.");
    } 
}


TUCarona::TUCarona()
{
    try
    {
        codigo.setValor(CODIGO_DE_CARONA);
        cidadeDeOrigem.setValor(CIDADE_DE_ORIGEM);
        estadoDeOrigem.setValor(ESTADO_DE_ORIGEM);
        cidadeDeDestino.setValor(CIDADE_DE_DESTINO);
        estadoDeDestino.setValor(ESTADO_DE_DESTINO);
        data.setValor(DATA);
        duracao.setValor(DURACAO);
        vagas.setValor(VAGAS);
        preco.setValor(PRECO);
    }
    catch(invalid_argument exp)
    {
        cout << exp.what() << endl;
        entradaValida = false;
    }
}

void TUCarona::setValores()
{
    carona.setCodigoDeCarona(codigo);
    carona.setCidadeDeOrigem(cidadeDeOrigem);
    carona.setEstadoDeOrigem(estadoDeOrigem);
    carona.setCidadeDeDestino(cidadeDeDestino);
    carona.setEstadoDeDestino(estadoDeDestino);
    carona.setData(data);
    carona.setDuracao(duracao);
    carona.setVagas(vagas);
    carona.setPreco(preco);
}


void TUCarona::comparaValores()
{
    if (carona.codigo.getValor() != CODIGO_DE_CARONA)
    {
        throw invalid_argument("Classe Carona nao armazenou um codigo valido.");
    }

    if (carona.cidadeDeOrigem.getValor() != CIDADE_DE_ORIGEM)
    {
        throw invalid_argument("Classe Carona nao armazenou uma cidade de origem valida.");
    }

    if (carona.estadoDeOrigem.getValor() != ESTADO_DE_ORIGEM)
    {
        throw invalid_argument("Classe Carona nao armazenou um Estado de origem valido.");
    } 
    
    if (carona.cidadeDeDestino.getValor() != CIDADE_DE_DESTINO)
    {
        throw invalid_argument("Classe Carona nao armazenou uma cidade de destino valida.");
    }

    if (carona.estadoDeDestino.getValor() != ESTADO_DE_DESTINO)
    {
        throw invalid_argument("Classe Carona nao armazenou um Estado de destino valido.");
    }
    if (carona.data.getValor() != DATA)
    {
        throw invalid_argument("Classe Carona nao armazenou uma data valida.");
    }

    if (carona.duracao.getValor() != DURACAO)
    {
        throw invalid_argument("Classe Carona nao armazenou uma duracao valida.");
    } 
    
    if (carona.vagas.getValor() != VAGAS)
    {
        throw invalid_argument("Classe Carona nao armazenou quantidade de vagas valida.");
    }

    if (carona.preco.getValor() != PRECO)
    {
        throw invalid_argument("Classe Carona nao armazenou um preco valido.");
    }
}


TUConta::TUConta()
{
    try
    {
        codigoDeBanco.setValor(CODIGO_DE_BANCO);
        numeroDeAgencia.setValor(NUMERO_DE_AGENCIA);
        numeroDeConta.setValor(NUMERO_DE_CONTA);
    }
    catch(invalid_argument exp)
    {
        cout << exp.what() << endl;
        entradaValida = false;
    }
}


void TUConta::setValores()
{
    conta.setCodigoDeBanco(codigoDeBanco);
    conta.setNumeroDeAgencia(numeroDeAgencia);
    conta.setNumeroDeConta(numeroDeConta);
}


void TUConta::comparaValores()
{
    if (conta.codigoDeBanco.getValor() != CODIGO_DE_BANCO)
    {
        throw invalid_argument("Classe Conta nao armazenou um codigo de banco valido.");
    }

    if (conta.numeroDeAgencia.getValor() != NUMERO_DE_AGENCIA)
    {
        throw invalid_argument("Classe Conta nao armazenou um numero de agencia valido.");
    }

    if (conta.numeroDeConta.getValor() != NUMERO_DE_CONTA)
    {
        throw invalid_argument("Classe Conta nao armazenou um numero de conta valido.");
    } 
}


void TestesEntidades::RunAll()
{
    bool entradasValidas = true;

    TUUsuario tUsuario;

    if (!(tUsuario.entradaValida))
    {
        cout << "Entrada invalida para classe Usuario." << endl << endl;
        entradasValidas = false;
    }

    TUReserva tReserva;

    if (!(tReserva.entradaValida))
    {
        cout << "Entrada invalida para classe Reserva" << endl << endl;
        entradasValidas = false;
    }

    TUCarona tCarona;

    if (!(tCarona.entradaValida))
    {
        cout << "Entrada invalida para classe Carona." << endl << endl;
        entradasValidas = false;
    }

    TUConta tConta;

    if (!(tConta.entradaValida))
    {
        cout << "Entrada invalida para classe Conta." << endl << endl;
        entradasValidas = false;
    }

    if (entradasValidas)
    {
        tUsuario.run();
        tReserva.run();
        tCarona.run();
        tConta.run();

        cout << "Fim dos testes de Entidades." << endl;
    }
}