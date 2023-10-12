#include <iostream>
#include <string>

using namespace std;

int main(){

    const int MAX_ITEM = 10;
    string inventory[MAX_ITEM];
    int numItems = 0;
    
    inventory[numItems++] = "Sword";
    inventory[numItems++] = "Armor";
    inventory[numItems++] = "Shield";

    cout << "Your items:\n";
    for(int i = 0; i < numItems; i++){
        cout << inventory[i] << endl;
    }

    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "Battle axe";

    cout << "\nYour items:\n";
    for(int i = 0; i < numItems; i++){
        cout << inventory[i] << endl;
    }

    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n";

    cout << "\nYou find a healing potion.";
    if(numItems < MAX_ITEM){
        inventory[numItems++] = "Healing potion";
    }
    else{
        cout << "You have too many items and can't carry another.";
    }

    cout << "\nYour items:\n";
    for(int i = 0; i < numItems; i++){
        cout << inventory[i] << endl;
    }

    return 0;
}