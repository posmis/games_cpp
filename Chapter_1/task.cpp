#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    double score_1, score_2, score_3;

    cout << "First score: ";
    cin >> score_1;

    cout << "Second score: ";
    cin >> score_2;

    cout << "Third score: ";
    cin >> score_3;

    cout << "Final result: " << (score_1 + score_2 + score_3) / 3 << endl;

    return 0;
}