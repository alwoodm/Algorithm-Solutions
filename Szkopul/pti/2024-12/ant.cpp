// Antyczna kolekcja
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, maxJanusza, liczbaOfertDoNegocjacji = 0;
    cin >> n >> maxJanusza;

    vector<int> idKlientowDoNegocjacji;

    for (int i = 0; i < n; i++) {
        int liczbaOfertSprzedawcy;
        cin >> liczbaOfertSprzedawcy;

        for (int j = 0; j < liczbaOfertSprzedawcy; j++) {
            int oferta;
            cin >> oferta;

            if (oferta < maxJanusza) {
                liczbaOfertDoNegocjacji++;
                if (idKlientowDoNegocjacji.empty() || idKlientowDoNegocjacji.back() != i + 1) idKlientowDoNegocjacji.push_back(i + 1);
            }
        }
    }

    cout << idKlientowDoNegocjacji.size() << endl;

    for (size_t i = 0; i < idKlientowDoNegocjacji.size(); i++) {
        cout << idKlientowDoNegocjacji[i];
        if (i < idKlientowDoNegocjacji.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}