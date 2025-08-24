// Jeziora w Bitolandii
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
using namespace std;
int n, m;
vector<string> mapa;
int maxArea = 0, minArea = INT_MAX;

void lake(int x, int y) {
    int area{};
    queue<int> Qx, Qy;
    Qx.push(x);
    Qy.push(y);
    mapa[y][x] = '+';

    while ( !Qx.empty()) {
        int xs = Qx.front(); Qx.pop();
        int ys = Qy.front(); Qy.pop();
        area++;
        if (xs<n-1 && mapa[ys][xs+1]=='.') {
            mapa[ys][xs+1] = '+';
            Qx.push(xs+1);
            Qy.push(ys);
        }
        if (xs>0 && mapa[ys][xs-1]=='.') {
            mapa[ys][xs-1] = '+';
            Qx.push(xs-1);
            Qy.push(ys);
        }
        if (ys<m-1 && mapa[ys+1][xs]=='.') {
            mapa[ys+1][xs] = '+';
            Qx.push(xs);
            Qy.push(ys+1);
        }
        if (ys>0 && mapa[ys-1][xs]=='.') {
            mapa[ys-1][xs] = '+';
            Qx.push(xs);
            Qy.push(ys-1);
        }

    }
    maxArea = max(maxArea, area);
    minArea = min(minArea, area);
}

int main(){
    cin >> n >> m;
    mapa.resize(m);
    for(auto &czescMapy : mapa){
        cin >> czescMapy;
    }
    for(int y=0; y<m;y++){
        for(int x = 0; x<n; x++){
            if(mapa[y][x] == '.')
                lake(x,y);
        }
    }
    if (maxArea == 0) {
        minArea = 0;
    }
    cout << maxArea << " " << minArea << endl;
    return 0;}