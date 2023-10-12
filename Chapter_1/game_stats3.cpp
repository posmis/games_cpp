#include <iostream>

using namespace std;

int main(){

    const int ALIEN_POINTS = 150;
    int aliensKilled = 3;
    int score = aliensKilled * ALIEN_POINTS;

    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};

    difficulty myDifficulty = EASY;
    shipCost myShipCost = BOMBER_COST;

    cout << "score: " << score << endl;

    cout << "\nTo upgrate my ship to a Cruiser will cost "
    << (CRUISER_COST - myShipCost) << " resurce points.\n";


    return 0;
}