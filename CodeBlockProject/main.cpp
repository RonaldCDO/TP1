#include <iostream>
#include <string>
#include "dominios.hpp"

using namespace std;

int main()
{
    Assento A;
    A.setValor("Matheus");
    cout << A.getValor() << endl;
    return 0;
}
