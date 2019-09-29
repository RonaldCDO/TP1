#include "testesentidades.hpp"

TUUsuario::TUUsuario()
{
    usuario.nome.setValor(NOME);
    usuario.telefone.setValor(TELEFONE);
    usuario.email.setValor(EMAIL);
    usuario.senha.setValor(SENHA);
    usuario.cpf.setValor(C_P_F);
}


void TUUsuario::compararValores()
{
    if ((usuario.nome.getValor() != NOME) && (usuario.telefone.getValor() != TELEFONE)
        && (usuario.email.getValor() != EMAIL) && (usuario.senha.getValor() != SENHA)
        && (usuario.cpf.getValor() != CPF))
    {
        throw invalid_argument("Classe Usuario nao armazenou um nome valido");
    }
}


void TUReserva::TUReserva()
{
    reserva.setCodigoDeReserva(CODIGO_DE_RESERVA);
    reserva.setAssento(ASSENTO);
    reserva.setBagagem(BAGAGEM);
}


void TUUsuario::resgatarValores()
{
    if (usuario.nome.getValor() != NOME || usuario.telefone.getValor() != TELEFONE ||
        usuario.getEmail() != EMAIL || usuario.getSenha() != SENHA || usuario.getCPF() != CPF)
    {
        throw invalid_argument("Classe Usuario nao armazenou um nome valido");
    }
}


void TUUsuario::resgatarValores()
{
    if (usuario.nome.getValor() != NOME || usuario.telefone.getValor() != TELEFONE ||
        usuario.getEmail() != EMAIL || usuario.getSenha() != SENHA || usuario.getCPF() != CPF)
    {
        throw invalid_argument("Classe Usuario nao armazenou um nome valido");
    }
}


void TUUsuario::resgatarValores()
{
    if (usuario.nome.getValor() != NOME || usuario.telefone.getValor() != TELEFONE ||
        usuario.getEmail() != EMAIL || usuario.getSenha() != SENHA || usuario.getCPF() != CPF)
    {
        throw invalid_argument("Classe Usuario nao armazenou um nome valido");
    }
}
