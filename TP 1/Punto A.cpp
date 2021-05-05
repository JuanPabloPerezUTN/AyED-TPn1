#include <iostream>

using namespace std;

int main()
{
    double kmh, mtrs;
    cout << ("Ingrese la velocidad con la que desee operar: ");
    cin >> kmh;
    mtrs = (kmh) / 3.6;
    cout <<"Velocidad igual a: "<< mtrs<< endl;

    return 0;
}
