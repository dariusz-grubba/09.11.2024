
#include <iostream>

//ZADANIE 3.2

using namespace std;

int main(){
    string znak;

    while(znak != "t") {
        cout << "Podaj dowolny znak: " << endl;
        cout << "> ";
        cin >> znak;
        cout << znak << endl;
        cout << endl;
    }

    return 0;
}

