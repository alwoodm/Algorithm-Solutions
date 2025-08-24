// Zakrapiana impreza
#include <iostream>

using namespace std;

int main() {
    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        unsigned long long potrzebneLitry; 
        unsigned int cenaButelki1L, cenaButelki2L;
        cin >> potrzebneLitry >> cenaButelki1L >> cenaButelki2L;

        cout << min(potrzebneLitry * cenaButelki1L,
                    ((potrzebneLitry / 2) * cenaButelki2L) + ((potrzebneLitry % 2) * cenaButelki1L)
                ) << endl;
    }

    return 0;
}