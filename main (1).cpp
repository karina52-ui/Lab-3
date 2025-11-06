#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout <<  " if 9: ";
setlocale(LC_ALL, "ukr");
    //Завдання 1
    double A, B;
    cout << "Введiть A i B: ";
    cin >> A >> B;

    if (A > B) {
        double temp = A;
        A = B;
        B = temp;
    }

    cout << "Менше значення (A): " << A << endl;
    cout << "Бiльше значення (B): " << B << endl;

    //Завдання 2
    cout <<  " figure 32: ";
    double x, y, r;
    cout << "\nВведiть координати точки (x, y): ";
    cin >> x >> y;
    cout << "Введiть радiус кола r: ";
    cin >> r;

    // умова належності до кола
    bool inCircle = (x * x + y * y <= r * r);

    if (!inCircle) {
        cout << "Точка поза межами кола." << endl;
    } else {
        if (x >= 0 && y >= 0) {
            cout << "Точка у зеленiй областi (I чверть)." << endl;
        } else if (x <= 0 && y >= 0) {
            cout << "Точка у жовтiй областi (II чверть)." << endl;
        } else if (x <= 0 && y <= 0) {
            cout << "Точка у червонiй областi (III чверть)." << endl;
        } else if (x >= 0 && y <= 0) {
            cout << "Точка у коричневiй областi (IV чверть)." << endl;
        }
    }

    return 0;
}