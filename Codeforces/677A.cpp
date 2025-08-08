#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, h, sum = 0, t;
    std::cin >> n >> h;

    while(n--){
        std::cin >> t;

        (t > h ? sum += 2 : sum++);
    }

    std::cout << sum;

    return 0;
}
