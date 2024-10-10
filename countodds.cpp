//Yorielys de los Santos | GitHub: yorielyssantos
//Programa que lee 10 enteros y despliega qué porcentaje fueron impares

#include <iostream>
using namespace std;

int main() {
    int n;
    int ctr = 0;

    cout << "Entra 10 enteros: ";

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n % 2 == 1) ctr++;
    }

    cout << "Porcentaje de impares: " << (ctr / 10.0 * 100) << "%\n";
    return 0;
}
