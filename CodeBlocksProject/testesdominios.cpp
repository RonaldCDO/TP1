#include "testesdominios.hpp"

using namespace std;

//  Métodos para a classe base Dominio
void TUDominio::tearDown()
{
    delete dominio;
}


void TUDominio::testarCenarioSucesso()
{
    try
    {
        dominio->setValor(VALOR_VALIDO);

        if (dominio->getValor() != VALOR_VALIDO)
        {
            throw invalid_argument("Valor valido '" + VALOR_VALIDO + "' nao foi salvo como atributo da classe " + tipo + ".");
        }
    }

    catch(invalid_argument exp)
    {
        throw invalid_argument("Valor valido '" + VALOR_VALIDO + "' foi recusado no método 'validar' da classe " + tipo + ".");
    }
}


void TUDominio::testarCenarioFalha()
{
    try
    {
        dominio->setValor(VALOR_INVALIDO);

        throw invalid_argument("Valor invalido '" + VALOR_INVALIDO + "' foi aceito para Dominio "  + tipo + ".");
    }

    catch(invalid_argument exp)
    {
        if (dominio->getValor() == VALOR_INVALIDO)
        {
            throw invalid_argument("Valor invalido '" + VALOR_INVALIDO + "' foi atribuido para a classe " + tipo + ".");
        };
    }
}


void TUDominio::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}

//  Métodos setUp para as classes de Teste de Domínios
void TUAssento::setUp()
{
    dominio = new Assento();
    tipo = "Assento";
}


void TUBagagem::setUp()
{
    dominio = new Bagagem();
    tipo = "Bagagem";
}


void TUCodigoDeBanco::setUp()
{
    dominio = new CodigoDeBanco();
    tipo = "Codigo de Banco";
}


void TUCodigoDeCarona::setUp()
{
    dominio = new CodigoDeCarona();
    tipo = "Codigo de Carona";
}


void TUCodigoDeReserva::setUp()
{
    dominio = new CodigoDeReserva();
    tipo = "Codigo de Reserva";
}


void TUCidade::setUp()
{
    dominio = new Cidade();
    tipo = "Cidade";
}


void TUCPF::setUp()
{
    dominio = new CPF();
    tipo = "CPF";
}


void TUData::setUp()
{
    dominio = new Data();
    tipo = "Data";
}


void TUDuracao::setUp()
{
    dominio = new Duracao();
    tipo = "Duracao";
}


void TUEstado::setUp()
{
    dominio = new Estado();
    tipo = "Estado";
}


void TUEmail::setUp()
{
    dominio = new Email();
    tipo = "E-mail";
}


void TUNome::setUp()
{
    dominio = new Nome();
    tipo = "Nome";
}


void TUNumeroDeAgencia::setUp()
{
    dominio = new NumeroDeAgencia();
    tipo = "Numero de Agencia";
}


void TUNumeroDeConta::setUp()
{
    dominio = new NumeroDeConta();
    tipo = "Numero de Conta";
}


void TUPreco::setUp()
{
    dominio = new Preco();
    tipo = "Preco";
}


void TUTelefone::setUp()
{
    dominio = new Telefone();
    tipo = "Telefone";
}


void TUSenha::setUp()
{
    dominio = new Senha();
    tipo = "Senha";
}


void TUVagas::setUp()
{
    dominio = new Vagas();
    tipo = "Vagas";
}

//  Método para executar todos os testes do domínio
void TestesDominios::RunAll()
{
    bool sucesso = true;

    TUAssento tAssento;
    TUBagagem tBagagem;
    TUCodigoDeBanco tCodigoDeBanco;
    TUCodigoDeCarona tCodigoDeCarona;
    TUCodigoDeReserva tCodigoDeReserva;
    TUCidade tCidade;
    TUCPF tCPF;
    TUData tData;
    TUDuracao tDuracao;
    TUEstado tEstado;
    TUEmail tEmail;
    TUNome tNome;
    TUNumeroDeAgencia tNumeroDeAgencia;
    TUNumeroDeConta tNumeroDeConta;
    TUPreco tPreco;
    TUTelefone tTelefone;
    TUSenha tSenha;
    TUVagas tVagas;

    try
    {
        tAssento.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tBagagem.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tCodigoDeBanco.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tCodigoDeCarona.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tCodigoDeReserva.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tCidade.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tCPF.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tData.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tDuracao.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tEstado.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tEmail.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tNome.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tNumeroDeAgencia.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tNumeroDeConta.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tPreco.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tTelefone.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tSenha.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    try
    {
        tVagas.run();
    }
    catch (invalid_argument exp)
    {
        cout << exp.what() << endl;
        sucesso = false;
    }

    if (sucesso)
        cout << "Sucesso nos testes!" << endl;
}
