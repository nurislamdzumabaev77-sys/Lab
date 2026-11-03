
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main() {
    int number;

    cout << "Vvedite desyatichnoe chislo (-128 do 127): ";
    cin >> number;

    if (number < -128 || number > 127) {
        cout << "Oshibka! Chislo vne diapazona." << endl;
        return 0;
    }

    string direct, reverse, additional;

