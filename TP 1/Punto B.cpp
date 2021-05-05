#include <iostream>

using namespace std;

int main()
{
    double m1 = 0;
    double b1 = 0;
    double m2 = 0;
    double b2 = 0;
    double m_inter = 0;
    double b_inter = 0;
    double x_inters = 0;
    double y_inters = 0;

    cout << "Ingrese la pendiente de la primer recta: ";
    cin >> m1;

    cout << "Ingrese el término independiente de la primer recta: ";
    cin >> b1;

    cout << "Ingrese la pendiente de la segunda recta: ";
    cin >> m2;

    cout << "Ingrese el término independiente de la segunda recta: ";
    cin >> b2;

    m_inter = m1 - m2;
    b_inter = b1 - b2;

    x_inters = (-1 * b_inter) / m_inter;

    y_inters = (m1 * x_inters) + b1;


    if (m1 == m2 && b1 != b2) {

        cout << "Ambas rectas son paralelas, por lo que no se intersecan en ningún punto";

    }
    else if (m1 == m2 && b1 == b2) {

        cout << "Ambas rectas son iguales, por lo que se intersecan en infinitos puntos";

    }
    else {

        cout << "El punto de intersección de las dos rectas es: (" << x_inters << " ; " << y_inters << ")";

    }

    return 0;
}
