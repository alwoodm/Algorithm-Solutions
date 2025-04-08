#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,b,c,d,e,f,g,h,i,j;
    short index = 0;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;

    vector<int> answers = {a,b,c,d,e,f,g,h,i,j};
    for (int i = 0; i < answers.size(); i++) {
        if(answers[0] < answers[i]) index++;
    }
    cout<<index;

    return 0;
}