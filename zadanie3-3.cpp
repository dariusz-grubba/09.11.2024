
#include <iostream>

//ZADANIE 3.3

using namespace std;

int main(){
    int A, B, C;
    int delta;
    float x1, x2, x;
    cout << "Rówanie kwadratowe ma postać: ax2+bx+c=0" << endl;
    cout << "Podaj liczbę A: " << endl;
    cout << "> ";
    cin >> A;
    cout << "Podaj liczbę B: " << endl;
    cout << "> ";
    cin >> B;
    cout << "Podaj liczbę C: " << endl;
    cout << "> ";
    cin >> C;
    cout << "Twoje równanie kwadratowe ma postać: " << A<<"x2+"<<B<<"X+"<<C<<"=0" << endl;
    cout << "Rozwiązanie równiania kwadratowego oblicza się deltą: b2 - 4ac" << endl;
    delta = (B*B - 4 * A * C);
    cout << "Twoja delta wynosi: " << delta << endl;
    if(delta > 0) {
        x1 = (-B - sqrt(delta)/2*A);
        x2 = (-B + sqrt(delta)/2*A);
        cout << "x1 jest równe: " << x1 << endl;
        cout << "x2 jest równe: " << x2 << endl;
    }else if(delta == 0) {
        x = ((-B)/2*A);
        cout << "x jest równe: " << x << endl;
    }else if(delta < 0) {
        cout << "Równanie nie ma rozwiązań" << endl;
    }

    return 0;
}

