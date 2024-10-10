//Yorielys de los Santos | GitHub: yorielyssantos
//programa que calcula el promedio de 10 enteros de los archivos txt

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    const int count = 10;

    cout << "Ingresa 10 enteros: ";

    for (int i = 0; i < count; i++) {
        cin >> n;
        sum += n;
    }

    double average = static_cast<double>(sum) / count;
    cout << "El promedio es: " << average << endl;

    return 0;
}

