#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    int n[size];
    float media;
    
    cout << "Digite 6 numeros inteiros:" << endl;

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        cin >> n[i];
        sum += n[i];
    }

    media = (float)sum / size;

    cout << "A media e: " << media << endl;

    return 0;
}
