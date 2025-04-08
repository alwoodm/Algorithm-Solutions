#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, maxPrice, offersToNegotiate = 0;
    cin >> n >> maxPrice;

    vector<int> clientIdsToNegotiate;

    for (int i = 0; i < n; i++) {
        int sellerOffers;
        cin >> sellerOffers;

        for (int j = 0; j < sellerOffers; j++) {
            int offer;
            cin >> offer;

            if (offer < maxPrice) {
                offersToNegotiate++;
                if (clientIdsToNegotiate.empty() || clientIdsToNegotiate.back() != i + 1) 
                    clientIdsToNegotiate.push_back(i + 1);
            }
        }
    }

    cout << clientIdsToNegotiate.size() << endl;

    for (size_t i = 0; i < clientIdsToNegotiate.size(); i++) {
        cout << clientIdsToNegotiate[i];
        if (i < clientIdsToNegotiate.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}