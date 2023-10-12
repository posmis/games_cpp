#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> games_list;
    vector<string>::iterator my_Itterator;
    vector<string>::const_iterator iter;

    string guess;
    string game_name;

    cout << "Enter '1' to show the games list.\n";
    cout << "Enter '2' to add a game in the list.\n";
    cout << "Enter '3' to remove a game from the list.\n";
    cout << "Enter 'quit' to quit program.\n";

    do {
        cout << "Please enter command: ";
        cin >> guess;

        if (guess == "1") {
            for (iter = games_list.begin(); iter != games_list.end(); ++iter) {
                cout << *iter << endl;
            }
        } else if (guess == "2") {
            cout << "Please enter an adding game name: ";
            cin >> game_name;
            games_list.push_back(game_name);
        } else if (guess == "3") {
            cout << "Please enter an removing game name: ";
            cin >> game_name;
            my_Itterator = find(games_list.begin(), games_list.end(), game_name);
            if (my_Itterator != games_list.cend()) {
                cout << "Element removed" << endl;
                games_list.erase(my_Itterator);
            } else {
                cout << "There arn't that game name" << endl;
            }
        }

    } while (guess != "quit");

    return 0;
}