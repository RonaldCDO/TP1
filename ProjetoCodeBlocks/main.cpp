#include <iostream>
#include <string>
#include "dominios.hpp"
#include "testesdominios.hpp"
#include "entidades.hpp"
#include "testesentidades.hpp"

using namespace std;

int main()
{
    TestesDominios::RunAll();
    cout << endl;
    TestesEntidades::RunAll();
    return 0;
}
