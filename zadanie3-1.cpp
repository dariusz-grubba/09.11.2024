#include <stdio.h>
#include <iostream>

//ZADANIE 3.1

using namespace std;

float addition(float x, float y) {
    float sum = x + y;
    return sum;
}
float subtraction(float x, float y) {
    float sub = x - y;
    return sub;
}
float multiplication(float x, float y) {
    float product = x * y;
    return product;
}
float division(float x, float y) {
if (y == 0) {
    cout << "Dzielenie przez 0" << endl;
}else {
    float quotient = x / y;
    return quotient;
}
}
int main()
{
    float x, y;
    cout << "Podaj x: " << endl;
    cout << "> ";
    cin >> x;
    cout << "Podaj y: " << endl;
    cout << "> ";
    cin >> y;
    cout << "Wynikiem dodawania jest: ";
    printf("%.2f", addition(x, y));
    cout << endl;
    cout << "Wynikiem odejmowania jest: ";
    printf("%.2f", subtraction(x, y));
    cout << endl;
    cout << "Wynikiem mnożenia jest: ";
    printf("%.2f", multiplication(x, y));
    cout << endl;
    cout << "Wynikiem dzielenia jest: ";
    printf("%.2f", division(x, y));


    return 0;
}

