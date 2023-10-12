#include <iostream>

using namespace std;

int main(){

    int score;

    double distance, engineTemp;
    char playAgain;
    bool shieldsUp;
    short lives, aliensKilled;

    int fuel;

    typedef unsigned short int ushort;

    score = 0;
    distance = 1200.7;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    engineTemp = 6274.16;

    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    cout << "\nHow much fuel?: ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    ushort bonus = 10;

    cout << "\nbonus: " << bonus << endl;

    return 0;
}